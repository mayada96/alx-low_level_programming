#include "main.h"

/**
 * void print_alphabet_x10 - print the alpha 10 times
 *
 * Return: no value on success
 */

void print_alphabet_x10(void)
{
	int i;
	char w;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (w = 'a' ; w <= 'z' ; w++)
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
