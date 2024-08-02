#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - A function that prints singly linked list
 * @h: singly lonked list head pointer
 *
 * Return: value of list elements
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
