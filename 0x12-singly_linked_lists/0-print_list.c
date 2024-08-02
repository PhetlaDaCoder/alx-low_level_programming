#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * prints_list - A function that prints singly linked list
 * @h: singly lonked list head pointer
 *
 * Return: value of list elements
 */

size_t print_list(const list_t *h);
{
	unsigned int size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		size++;
	}
	return (size);
}
