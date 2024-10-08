#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t list.
 *
 * @head: Head of the list.
 * Return: null
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
