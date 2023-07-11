#include "main.h"
#include <stdlib.h>

/**
 * free_grid - clear an array that was created
 * @grid: the array to be cleared
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i, *j;

	for (i = 0 ; i < height ; i++)
	{
		j = grid[i];
		free(j);
	}

	free(grid);
}
