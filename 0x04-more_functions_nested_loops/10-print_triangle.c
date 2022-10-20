#include "main.h"

/**
 * print_triangle - ptint trinagle
 * @size: size of the tringle
 *
 * Return: tringle
 */

void print_triangle(int size)
{
	int i, l, m;

	if (size > 0)
	{
		for (l = size ; l > 0 ; l--)
		{
			m = l - 1;
			i = size - m;
			for ( ; m > 0 ; m--)
			{
				_putchar(' ');
			}
			for ( ; i > 0 ; i--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
