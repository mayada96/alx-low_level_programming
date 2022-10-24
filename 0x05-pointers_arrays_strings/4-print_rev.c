#include "main.h"

/**
 * print_rev - print the string in reverce
 * @s: the pointer to the string
 *
 * Return: 0 on successfully printing the reverse of string
 */

void print_rev(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] >= '\0')
	{
		a++;
	}
	b = a;
	for (c = b - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
