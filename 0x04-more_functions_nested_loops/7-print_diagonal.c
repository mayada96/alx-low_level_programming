#include "main.h"

/**
 * print_diagonal - print dignol line
 * @n: number of lines to be interd
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int l;
	int m;

	if (n > 0)
	{
		for (l = 0 ; l < n; l++)
		{
			for (m = 1 ; m < (l + 1) ; m++)
			{
				_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
