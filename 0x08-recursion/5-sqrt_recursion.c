#include "main.h"

/**
 * _pow_recursion - print the square root of a number
 * @x: the number to find its power for
 *@y: the power
 * Return: the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y == x / 2)
	{
		return (-1);
	}
	return (_pow_recursion(x, y + 1));
}

/**
 * _sqrt_recursion - print the square root of a number
 * @n: the number to find its square root
 * Return: the square root or -1 if the number have no square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_pow_recursion(n, i));
}
