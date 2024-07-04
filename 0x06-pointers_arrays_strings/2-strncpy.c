#include "main.h"

/**
 * _strcpy - function that copies strings
 *
 * @src: Source of strings
 * @dest: Destination of the string.
 * @n: Length of int.
 *
 * Return: Pointer of string dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);
}
