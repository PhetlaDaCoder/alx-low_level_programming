#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenats all arguments
 * @ac: pointer
 * @av: altura
 *
 * Return: results
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, cont = 0;
	char *result, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			cont++;
			new++;
		}
		cont++;
		i++;
	}
	result + malloc(cont + 1);
	i = 0;
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			result[j] = *new;
			new++;
			j++;
		}
		result[j] = '\n';
		j++;
		i++;
	}
	result[cont + 1] = '\0';
	return (result);
}
