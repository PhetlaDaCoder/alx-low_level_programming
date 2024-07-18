#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: number of bytes allocated
 *
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);

	return (block);
}
