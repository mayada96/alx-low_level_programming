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
	int n;
	int d;

       for ( ; a <= 2 ; a++)
	{
		b = 0 ;
		for ( ; b <= 3 ; b++)
		{
			n = 0;
			while (n <= 5)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(n +'0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				n++;
			}
		}
	}
}
