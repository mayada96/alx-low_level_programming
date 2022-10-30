#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int i;
	long int n1, n2, n3, sum = 0;

	n1 = 0;
	n2 = 1;
	for (i = 1 ; i <= 44 ; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 % 2 == 0)
		{
			sum = sum + n3;
		}
		else
		{
			continue;
		}
	}
	printf("%ld\n", sum);
	return(0);
}
