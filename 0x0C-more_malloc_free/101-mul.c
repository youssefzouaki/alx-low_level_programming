#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _isdigit - it is digit?
 * @s: pointer to a string
 * @argv: array of arguments
 *
 * Return: 1 (Success), 0 (Error)
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		return (0);
		i++;
	}
	return (1);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int *result;
	char *s1, *s2;
	int i, j, len, len1 = 0, len2 = 0, num1, num2, ret, z = 0;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len = (len1 + len2 + 1);
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i < len - 1; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		num1 = s1[i] - '0';
		ret = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			num2 = s2[j] - '0';
			ret +=result[i + j + 1] + num1 * num2;
			result[i + j + 1] = ret % 10;
			ret /= 10;
		}
		if (ret > 0)
			result[i + j + 1] += ret;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			z = 1;
		if (z)
			_putchar(result[i] + '0');
	}
	if (!z)
		_putchar('0');
	
	_putchar('\n');
	free(result);
	return (0);
}
