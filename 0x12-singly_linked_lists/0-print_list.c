#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
    char *s;
    unsigned int l, cmpt = 0;

    while (h != NULL)
    {
        s = h->str;
        l = h->len;

        if (s == NULL)
        {
            s = "(nil)";
            l = 0;

        }
        
        printf("[%u] %s\n", l, s);
        h = h->next;
        cmpt++;
    }
    return (cmpt);
}
