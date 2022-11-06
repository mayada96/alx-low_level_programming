#include <stdio.h>

/**
 *  main - finds and prints the largest prime factor of the number 612852475143
 *  followed by a new line
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long n = 962852475143;
	unsigned long i, j, isprime;

	for (i = 2 ; i <= n ; i++)
	{
		if (n % i == 0)
		{
			isprime = 1;
			for (j = 2 ; j <= i / 2 ; j++)
			{
				if (i % j == 0)
				{
					isprime = 0;
					break;
				}
			}
			if (isprime == 1)
			{
				printf("%lu", i);
			}
		}
	}
	return (0);
}
