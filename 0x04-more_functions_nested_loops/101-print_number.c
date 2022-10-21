#include "main.h"

/**
 * print_number - print an integer number
 * @n: the number to br printed
 *
 * Return: void
 */

void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
