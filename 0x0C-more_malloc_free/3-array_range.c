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
	int *array, index, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = min++;
	}
	return (array);
}
