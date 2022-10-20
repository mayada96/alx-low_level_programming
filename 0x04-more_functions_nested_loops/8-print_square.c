#include "main.h"

/**
 * print_square - print the square
 * @size: size of the squrw
 *
 * Return: squares
 */

void print_square(int size)
{
	int sq;
	int s;

	if (size > 0)
	{
		for (sq = 0 ; sq < size ; sq++)
		{
			for (s = 0 ; s < size ; s++)
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
