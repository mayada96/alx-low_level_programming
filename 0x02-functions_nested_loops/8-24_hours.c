#include "main.h"

/**
 * jack_bauer - print time
 *
 * Return: notthing
 */

void jack_bauer(void)
{
	int a = 0;
	int b;

	while (a < 24)
	{
		b = 0;
		while (a < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((a / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}

