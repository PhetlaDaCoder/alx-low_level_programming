#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: number of values
 * @c: size of unit
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
