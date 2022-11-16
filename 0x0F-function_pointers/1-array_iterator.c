#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print elements of array
 * @array: pointer to array
 * @size: the number og the array elements
 * @action: pointer to function that print the element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
