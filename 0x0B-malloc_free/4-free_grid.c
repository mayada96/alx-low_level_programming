#include "main.h"

/**
 * free_grid - free a 2d array we allocate
 * @grid: the 2D array
 * @height: the column
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
