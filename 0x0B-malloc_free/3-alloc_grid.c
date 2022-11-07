#include "main.h"

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: the row dimantion
 * @height: the column dimantion
 *
 * Return: pointer to the 2 dimantional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for ( ; i >= 0 ; i--)
			{
				free(p[i]);
			}
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
