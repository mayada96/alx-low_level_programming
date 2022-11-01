#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the tow diagsum of square
 * @a: pointer to the square array
 * @size: the number of square
 *
 * Return: the sum of the tow diagonals
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 = sum1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0 ; i < size ; i++)
	{
		sum2 = sum2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
