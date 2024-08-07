#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates chacractrers in a string
 * @s: specific string to locate
 * @c: char to locate
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
