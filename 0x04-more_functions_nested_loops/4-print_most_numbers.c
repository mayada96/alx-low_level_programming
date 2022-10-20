#include "main.h"

/**
 * print_most_numbers - prin numbers exebt 2 and 9
 *
 * Return: the numbers
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i == '4' || i == '2')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
