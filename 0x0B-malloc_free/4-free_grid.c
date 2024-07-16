#include <stdlib.h>
#include "main.h"

/**
 * free_grid - functions that prints 2D grid
 * @grid:
 * pointer
 * @height: alter
 */

void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
