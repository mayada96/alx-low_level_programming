#include "main.h"

/**
 * print_to_98 - print natural numbers
 * @n: number to be printed
 *
 * Return: printed numbers
 */

void print_to_98(int n)
{
	int a, j;


	if (n <= 98)
	{
		for (a = n ; a <= 98 ; a++)
		{
		_putchar(a + '0');
		if (a == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		}
	}
	else if (n >= 98)
	{
		for (j = n ; j >= 98 ; j--)
		{
			_putchar(j + '0');
			if (j == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
