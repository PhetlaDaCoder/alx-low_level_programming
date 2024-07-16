#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates an array
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
