#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Return 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z' ; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
