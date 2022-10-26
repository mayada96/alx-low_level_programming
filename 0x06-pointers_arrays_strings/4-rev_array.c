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
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
