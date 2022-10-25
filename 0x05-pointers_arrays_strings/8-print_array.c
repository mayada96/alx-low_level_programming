#include "main.h"
#include <stdio.h>

/**
 * print_arry - print the element of an arry
 * @a: the pointer to the arry
 * @n: the elemnt s opf arry
 *
 * Return: thr arry
 */

void print_array(int *a, int n)
{
	int i;

	for ( i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
