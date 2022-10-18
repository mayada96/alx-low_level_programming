#include "main.h"

/**
 * print_last_digit -print the last digit of a number
 * @a: the number to be prtint
 *
 * Return: o with the last number
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -a;
	}
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
