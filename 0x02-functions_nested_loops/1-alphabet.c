#include "main.h"

/**
 * print_alphabet - print alphabet in lowerecasw
 * Return:0 when done,
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar('\n');

}
