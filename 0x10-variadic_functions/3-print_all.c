#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list op;
	char *s;
	int i = 0;

	va_start(op, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(op, int));
				break;
			case 'i':
				printf("%d", va_arg(op, int));
				break;
			case 'f':
				printf("%f", va_arg(op, double));
				break;
			case 's':
				s = va_arg(op, char*);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(op);
}
