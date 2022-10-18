#include "main.h"

/**
 * print_sign -Print the sign of the number
 * @n: the charecter to be print
 *
 * Return: 1 on positive
 * on minus -1 on zero put zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

