#include <stdio.h>

/**
 *  main - finds and prints the largest prime factor of the number 612852475143
 *  followed by a new line
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	long n;
	long i;

	n = 612852475143;
	for (i = 2 ; i <= n ; i++)
	{
		if (n % i != 0)
		{
			continue;
		}
		else
		{
			while (n % i != 0)
			{
				printf("%ld", i);
				n = n / i;
			}
		}
	}
	return (0);
}
