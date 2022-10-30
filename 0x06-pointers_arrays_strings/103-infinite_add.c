#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * infinite_add - add two numbers
 * @n1: pointer to first number
 * @n2: pointer to number 2
 * @r: pointer to the addtion result
 * @size_r: the buffer to the result
 *
 * Return: the addition of tow string numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int carry = 0;
	int lar, sum, dig1, dig2;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	lar = i;
	if (size_r <= lar + 1)
	{
		return (0);
	}
	r[lar + 1] = '\0';
	i--;
	j--;
	dig1 = n1[i] - '0';
	dig2 = n2[j] - '0';
	while (lar >= 0)
	{
		sum = dig1 + dig2 + carry;
		if (lar == 0)
		{
			r[lar] = carry + '0';
		}
		if (sum >= 10)
		{
			carry = sum / 10;
		}
		else
		{
			carry = 0;
		}
		if (sum > 0)
		{
			r[lar] = (sum % 10) + '0';
		}
		else
		{
			r[lar] = '0';
		}
		if (i > 0)
		{
			i--;
			dig1 = n1[i] - '0';
		}
		else
		{
			dig1 = 0;
		}
		if (j > 0)
		{
			j--;
			dig2 = n2[j] - '0';
		}
		else
		{
			dig2 = 0;
		}
		lar--;
	}
	if (*r == '0')
	{
		return (r + 1);
	}
	else
	{
		return (r);
	}
}
