#include "main.h"

/**
 * _print_rev_recursion - print the string in reverse
 * @s: pointer to string to be printer
 *
 * Return: thr reversed string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		_print_rev_recursion(s + 1);
	}
	if (i > 0)
	{
		i--;
	}
	_putchar(s[i]);
}
