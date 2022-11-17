#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - avariadic function add all arguments passed to it
 * @n: the first optional argument
 *
 * Return: the sum of the arguments passed to it
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	int sum;
	unsigned int i;

	va_start(op, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(op, int);
	}
	va_end(op);
	return (sum);
}
