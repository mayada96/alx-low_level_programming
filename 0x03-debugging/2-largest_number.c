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
	int larg;

	if ((a > b && b > c) || (a > c && c > b))
	{
		larg = a;
	}

	else if ((b > a && a > c) || (b > c && c > a))
	{
		larg = b;
	}

	else if ((c > a && a > b) || (c > b && b > a))
	{
		larg = c;
	}

	return (larg);
}
