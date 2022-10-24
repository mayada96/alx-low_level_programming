#include "main.h"

/**
 * print_rev - print the string in reverce
 * @s: the pointer to the string
 *
 * Return: 0 on successfully printing the reverse of string
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (a = a - 1 ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
