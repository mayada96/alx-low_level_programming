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

	for (s = 0 ; str[s] != '\0' ; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}

	_putchar('\n');
}
