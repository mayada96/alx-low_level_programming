#include "main.h"

/**
 * is_prime_number - check wether the number is aprime number
 * @n: the number to be checked
 *
 * Return: 1 if its prime number 0 ifelse
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % (n - 1) == 0)
	{
		return (0);
	}
	return (is_prime_number(n - 1));
}
