#include "main.h"

/**
 * print_line - print line
 * @n: number of lines to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0 ; m < n ; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
