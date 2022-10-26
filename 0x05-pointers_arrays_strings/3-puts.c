#include "main.h"

/**
 * _puts - print the string to the stander output
 * @str:the pointer to the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
