#include <stdio.h>

/**
 * main - entry point
 *
 * Return: the sum of multiples of 5 & 3
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
