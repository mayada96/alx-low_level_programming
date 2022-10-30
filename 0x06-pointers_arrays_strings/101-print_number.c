#include "main.h"
#include <stdio.h>

/**
 * print_number - print integer number
 * @n: the integer to be printed
 *
 * Return: void
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n <= 9 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n / 10 != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
