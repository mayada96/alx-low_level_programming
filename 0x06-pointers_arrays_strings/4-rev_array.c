#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the element og integers
 * @a: the pointer to the array
 * @n: number of element on array
 *
 * Return: the reversd array
 */

void reverse_array(int *a, int n)
{
	int i, j, l;

	i = n - 1;
	for (l = 0 ; l < n / 2 ; l++)
	{
		j = a[l];
		a[j] = a[i];
		a[i--] = j;
	}
}
