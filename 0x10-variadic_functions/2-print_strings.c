#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: numbers of the strings to be printed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	char *s;

	va_start(op, n);
	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(op, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i == (n - 1))
		{
			break;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(op);
	printf("\n");
}
