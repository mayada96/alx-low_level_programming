#include "main.h"

/**
 * print_number - print an integer number
 *@n:the integer number
 *
 * Retern: integer number
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) != 0)
	{
		if ((n / 10) >= 10 && (n / 10) < 100)
		{
			_putchar((n / 10) / 10 + '0');
			_putchar((n / 10) % 10 + '0');
		}
		else if ((n / 10) >= 100)
		{
			if ((n / 10) / 10 != 0)
			{
				_putchar((((n / 10) / 10) / 10) + '0');
				_putchar((((n / 10) / 10) % 10) + '0');
			}
			_putchar((n / 10) % 10 + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
		}
	}
	_putchar((n % 10) + '0');
}
