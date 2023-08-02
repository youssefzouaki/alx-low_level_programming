#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp2 = NULL, *temp1 = NULL;
	size_t n, num = 0;

	temp1 = head;
	while (temp1)
	{
		printf("[%p] %d\n", (void *)temp1, temp1->n);
		temp1 = temp1->next;
		num++;
		temp2 = head;
		n = 0;
		while (n < num)
		{
			if (temp1 == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp1, temp1->n);
				return (num);
			}
			temp2 = temp2->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (num);
}
