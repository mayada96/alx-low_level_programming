#include "main.h"

/**
 * _print_rev_recursion - print the string in reverse
 * @s: pointer to string to be printer
 *
 * Return: thr reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	s--;
	_putchar(*s);
}
