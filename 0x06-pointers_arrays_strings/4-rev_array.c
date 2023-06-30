/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int swp;

	for (i = 0; i < n / 2; i++)
	{
		swp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = swp;
	}
}
