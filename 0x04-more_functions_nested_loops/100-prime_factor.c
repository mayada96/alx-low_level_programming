#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int a = 612852475143;
	unsigned long int b;

	for (b = 2 ; b <= a ; b++)
	{
		if (a % b == 0)
		{
			printf("%lu, ", b);
		}
		else
		{
			continue;
		}
	}
	printf("\n");
	return (0);
}
