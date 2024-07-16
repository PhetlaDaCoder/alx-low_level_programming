#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns pointer to 2D array of intergers
 * @width: int 1
 * @height: int 2
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **_new_height;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	_new_height = malloc(height * sizeof(int *));
	if (_new_height == NULL)
		return (NULL);
	for (i = 0; i < height; o++)
	{
		_new_height[i] = malloc(width * sizeof(int));
		if (_new_height[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(_new_height[i]);
			}
			free(_new_height);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			_new_height[i][j] = 0;
		}
	}
	return (_new_height);
}
