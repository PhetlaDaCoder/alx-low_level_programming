#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node of a linked list.
 * @head: Head of the list.
 * @index: Index of the nth node.
 *
 * Return: Nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	n = 0;

	while (head != NULL)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}

	return (head);
}
