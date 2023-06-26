/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to an integre
 * @b: a pointer to an integre
 * 
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
	int swp;
	swp = *a;
	*a = *b;
	*b = swp;
}
