#include "main.h"

/**
 * print_last_digit -print the last digit of a number
 * @n: the number to be prtint
 *
 * Return: o with the last number
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
