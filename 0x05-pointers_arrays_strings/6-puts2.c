#include "main.h"

/**
 * puts2 - print string after string
 * @str: the pointer to the string
 *
 * Return: the string wanted
 */

void puts2(char *str)
{
	int s;

	s = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
		s += 2;
	}

	_putchar('\n');
}
