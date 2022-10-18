#include "main.h"

/**
 * print_to_98 - print natural numbers
 * @n: number to be printed
 *
 * Return: printed numbers
 */

void print_to_98(int n)
{
	for (n = 0 ; n <= 98 ; n++)
	{
		_putchar(n + '0');
		if (n == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
