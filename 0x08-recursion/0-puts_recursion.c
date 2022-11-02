#include "main.h"
#include <string.h>

/**
 * _puts_recursion - print the string followed by new line
 * @s: pointer to string to be printed
 *
 * Return : the string folloed by new line
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
