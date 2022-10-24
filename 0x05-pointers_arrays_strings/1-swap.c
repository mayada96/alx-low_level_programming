#include "main.h"

/**
 * swap_int - swap two variables
 * @a: the first variable
 * @b: the second variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
