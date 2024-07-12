i#include "main.h"
/**
 * _puts - prints string.
 * @str: it's the string
 * Return: length of string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
