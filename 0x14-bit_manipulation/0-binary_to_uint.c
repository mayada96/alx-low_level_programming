#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int number
 * @b: pointer to the a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * b is null or b isnot equal to 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0, mul = 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		i++;
	}
	for (i -= 1 ; i >= 0 ; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - '0') * mul;
		mul *= 2;
	}
	return (num);
}
