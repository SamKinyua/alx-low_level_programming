#include "lists.h"

/**
 * print_listint - Prints elements of list_int list
 * @h: struct data type pointer
 * Return: str i elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n, new_node->n);
		i++;
	}
	return(i);
}
