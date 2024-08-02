#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds a new node at the beginning
 * @head: head of linked list
 * @str: string
 * Return: Address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *value;
	size_t vchar;

	value = malloc(sizeof(list_t));
	if (value == NULL)
		return (NULL);

	value->str = strdup(str);

	for (vchar = 0; str[vchar]; vchar++)
		;

	value->len = vchar;
	value->next = *head;
	*head = value;

	return (*head);
}
