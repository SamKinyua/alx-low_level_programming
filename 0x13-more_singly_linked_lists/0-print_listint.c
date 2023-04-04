#include "lists.h"

/**
 * print_listint - Prints elements of list_int list
 * @h: struct data type pointer
 * Return: str i elements
 */

size_t print_listint(const listint_t *h)
{
	size_t hesabu = 0;

	while (h)
	{
		printf('%d\n", h->n);
		h = h->next;
		hesabu++;
	}

	return (hesabu);
}
