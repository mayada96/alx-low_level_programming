#include "main.h"

/**
 * largest_number - print the largest number
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: the largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
