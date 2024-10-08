#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list.
 * @head: Head of the list.
 * @n: Value of the element.
 *
 * Return: Address of new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *a;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	a = *head;

	if (a != NULL)
	{
		while (a->prev != NULL)
			a = a->prev;
	}

	new->next = a;

	if (a != NULL)
		a->prev = new;

	*head = new;

	return (new);
}
