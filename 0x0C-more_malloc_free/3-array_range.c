#include "main.h"
#include <stdlib.h>

/**
 * array_range -creates an array of integers.
 * @min: the start of elemit
 * @max: the end of elements
 *
 * Return: arry of inegers or NULL
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	for (j = min ; j <= max ; j++);
	p = malloc(sizeof(int) * (j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i <= j ; i++)
		{
			p[i] = min++;
		}
	}
	return (p);
}
