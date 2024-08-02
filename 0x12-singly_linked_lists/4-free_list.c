#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees given list
 * @head:  linked list head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *now;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now->str);
		free(now);
	}
}
