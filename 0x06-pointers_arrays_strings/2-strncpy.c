#include "main.h"

/**
 * _strncpy - function that copies strings
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

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
