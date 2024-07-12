#include "main.h"

/**
 * _memset - function fills @n bytes pointer to @s with consant @b
 *
 * @n: bytes of memory area pointed by @s
 *
 * @s: the constant byte of @b
 *
 * @b: memory area pointer
 *
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
