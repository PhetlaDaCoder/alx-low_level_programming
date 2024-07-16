#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two digits
 * @s1: char one
 * @s2: char two
 *
 * Return: char concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	p = malloc(k * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (cont = 0; cont < i; cont++)
	{
		p[cont] = s1[cont];
	}
	for (cont = 0; cont <= j; cont++)
	{
		p[cont + i] = s2[cont];
	}
	return (p);
}
