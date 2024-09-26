#include "main.h"
/**
 * _strlen - returns length of string.
 * @s: char to check
 * Return: 0 when done.
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
