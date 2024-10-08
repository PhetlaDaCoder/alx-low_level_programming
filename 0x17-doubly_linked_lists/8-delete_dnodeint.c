#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of list.
 * @head: Head of the list.
 * @index: Index of new node.
 *
 * Return: ! if done or -1 if fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int a;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	a = 0;

	while (h1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		a++;
	}

	return (-1);
}
