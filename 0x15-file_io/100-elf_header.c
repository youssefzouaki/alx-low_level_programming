#include "main.h"
#include <elf.h>
#include <stdlib.h>
#include <stdio.h>

#define USAGE "Usage: elf_hader elf_filename\n"
#define ERR_NOOPEN "Error: Can't open file: %s\n"
#define ERR_NOREAD "Error: Can't read from file: %s\n"
#define ERR_NOELF "Not elf file: %s\n"
#define ERR_NOCLOSE "Error: Can't close fd: %d\n"

void print_magic(Elf64_Ehdr h);
void print_class(Elf64_Ehdr h);
void print_data(Elf64_Ehdr h);
void print_version(Elf64_Ehdr h);
void print_osabi(Elf64_Ehdr h);
void print_abi(Elf64_Ehdr h);
void print_type(Elf64_Ehdr h);
void print_entry(Elf64_Ehdr h);
void close_file(int fd);

/**
 * main - displays the information
 * contained in the ELF header at the start of an ELF file.
 * @ac: argument count
 * @av: pointer to a tow dimentional array of char
 *
 * Return: 0 succec.
*/
int main(int ac, char *av[])
{
	int fd;
	ssize_t r;
	Elf64_Ehdr h;

	if (ac != 2)
		dprintf(STDERR_FILENO, USAGE), exit(98);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, ERR_NOOPEN, av[1]), exit(98);
	r = read(fd, &h, sizeof(h));
	if (r < 1 || r != sizeof(h))
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]);
		close_file(fd);
		exit(98);
	}
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E'
				&& h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
	{
		printf("ELF Header\n");
	}
	else
	{
		close_file(fd);
		dprintf(STDERR_FILENO, ERR_NOELF, av[1]);
		exit(98);
	}

	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abi(h);
	print_type(h);
	print_entry(h);
	close_file(fd);
	return (0);
}
/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class - Prints the class of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_NIDENT])
	{
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASSNONE:
		printf("none\n");
		break;
	}
}
/**
 * print_data - Prints the data of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATANONE:
		printf("none\n");
		break;
	}
}
/**
 * print_version - Prints the version of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	case EV_NONE:
		printf("\n");
		break;
		break;
	}
}
/**
 * print_osabi - Prints osabi of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", h.e_ident[EI_OSABI]);
	}
}
/**
 * print_abi - Prints abi of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_abi(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n", h.e_ident[EI_ABIVERSION]);
}
/**
 * print_type - Prints type of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	printf("  Type:                              ");

	switch (p[i])
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	default:
		printf("<unknown: %x>\n", p[i]);
	}
}
/**
 * print_entry - Prints entry of an ELF header.
 * @h: the ELF header structer.
 *
 * Return: nothing.
 */
void print_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               ");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS32 ? 3 : 7;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);

		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS32 ? 3 : 7;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);

		printf("\n");
	}
}
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
	{
		if (close(fd) == -1)
		{
			dprintf(STDERR_FILENO, ERR_NOCLOSE, fd);
			exit(98);
		}
	}
