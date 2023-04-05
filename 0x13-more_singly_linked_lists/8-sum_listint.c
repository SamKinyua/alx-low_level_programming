#include "lists.h"

/**
 * sum_listint - returns sum of listint_t data
 * @head: the list pointed to
 *
 * Return: sum of the list data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
