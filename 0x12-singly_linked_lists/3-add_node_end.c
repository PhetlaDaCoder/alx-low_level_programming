#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of list
 * @head: linked list head
 * @str: string to store list in.
 * Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *one, *tempo;
	size_t ochar;

	one = malloc(sizeof(list_t));
	if (one == NULL)
		return (NULL);

	one->str = strdup(str);

	for (ochar = 0; str[ochar]; ochar++)
		;

	one->len = ochar;
	one->next = NULL;
	tempo = *head;

	if (tempo == NULL)
	{
		*head = one;
	}
	else
	{
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = one;
	}

	return (*head);
}
