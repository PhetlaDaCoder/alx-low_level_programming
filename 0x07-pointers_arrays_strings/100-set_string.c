#include "main.h"

/**
 * set_string - sets value of pointer to a char
 *
 * @s: pointer to pointer to char
 * @to: Address to follow
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
