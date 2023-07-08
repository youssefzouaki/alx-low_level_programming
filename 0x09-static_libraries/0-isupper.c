/**
 * _isupper - checks for uppercase character
 * @c: input character c
 * Return: 1 if c is uppercase
 * Returns 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
