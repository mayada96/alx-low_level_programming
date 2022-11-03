#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string into integer
 * @s: pointer to string to be converted
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int n = 0;
	int i = 0;
	int sign = 1;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - (2 * (s[i++] == '-'));
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (n > INT_MAX / 10 || (n == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		n = 10 * n + (s[i++] - '0');
	}
	return (sign * n);
}
