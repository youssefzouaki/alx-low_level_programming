/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string to print
 *
 * Return: returns the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * test_pal - checks the characters recursively for palindrome
 * @s: The string
 * @i: iterator
 * @len: length of the string
 *
 * Return: returns the length of a string.
 */
int test_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	
	return (test_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - s it is palindrome string
 * @s: pointer to a string
 *
 * Return: 1 yes 0 no.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (test_pal(s, 0, _strlen_recursion(s)));

}
