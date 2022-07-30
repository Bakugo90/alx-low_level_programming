#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid previously
 * @grid: Pointer to a pointer grid
 * @height: Height of the matriz
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);

}
