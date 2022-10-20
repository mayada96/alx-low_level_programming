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

	for (i = 0 ; i <= 9 ; i++)
	{
		b = 0;
		for ( ; b <= 14 ; b++)
		{
			if (b / 10 != 0)
			{
				_putchar(b % 10 + '0');
			}
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
