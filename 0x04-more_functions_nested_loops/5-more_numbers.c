#include "main.h"

/**
 * more_numbers - print numbers 10 times
 *
 * Return: ten time numbers
 */

void more_numbers(void)
{
	int i;
	int b;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}

		_putchar('\n');
	}
}
