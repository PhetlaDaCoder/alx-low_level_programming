#include "main.h"
/**
 * puts2 - prints all characters
 *
 * @str: string to be checked.
 * Return: 0 when done
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
