#include "function_pointers.h"

/**
 * int_index - looks for sn int
 * @array: array with data
 * @size: array sizze
 * @cmp: pointer to function
 * Return: toatl integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0)
					return (i);
		}
	}

	return (-1);
}
