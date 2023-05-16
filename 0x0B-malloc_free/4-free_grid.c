#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid- frees the grid in the alloc grid program
 * Description: frees space in previous program
 * @grid: previous grid
 * @height: height of array
 **/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
