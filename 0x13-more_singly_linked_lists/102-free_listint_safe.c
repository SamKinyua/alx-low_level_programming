#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to head
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *safe_node = *h;
	listint_t *tmp_node;

	if (!h)
		return (0);
	while (safe_node != NULL)
	{
		counter++;
		tmp_node = safe_node;
		safe_node = safe_node->next;
		free(tmp_node);

		if (tmp_node < safe_node)
			break;
	}
	*h = NULL;
	return (counter);
}
