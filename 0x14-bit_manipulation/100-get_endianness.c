#include "main.h"

/**
 * get_endianness - check endianness
 * Return: o if Big, 1 if little
 */

int get_endianness(void)
{
	int nmb;

	nmb = 1;
	if (*(char *)&nmb == 1)
		return (1);
	else
		return (0);
}
