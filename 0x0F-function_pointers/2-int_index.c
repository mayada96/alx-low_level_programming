#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the array
 * @size: the number of the elements on the array
 * @cmp: pointer to function that compair
 *
 * Return: the index of the matched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
