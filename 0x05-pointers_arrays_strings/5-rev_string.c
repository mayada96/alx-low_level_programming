#include "main.h"

/**
 * rev_string - print revers of string
 * @s: the pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\0');
}
