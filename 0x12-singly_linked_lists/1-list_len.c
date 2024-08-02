#include "lists.h"

/**
 * list_len - total elements in the list
 * @h: lits
 * Return: list elements
 */

size_t list_len(const list_t *h)
{
	size_t new_element;

	new_element = 0;
	while (h != NULL)
	{
		h = h->next;
		new_element++;
	}
	return (new_element);
}
