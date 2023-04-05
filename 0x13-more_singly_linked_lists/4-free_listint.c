#include "lists.h"

/**
 * free_listint - frees a listnt_t list
 * @head: listint_t to free
 * Return: void - nothing
 */

void free_listint(listnt_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
