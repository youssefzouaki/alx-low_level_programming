/**
 * rot13 - encodes a string into rot-13.
 * @s: pointer to a string
 *
 * Return: pointer to a string
 */

char *rot13(char *s)
{
	int i, j;
	char *a = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
            {
                s[i] = b[j];
                break;
            }
		}

	}

	return (s);

}
