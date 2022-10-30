#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, n3;

	n1 = 1;
	n2 = 2;
	printf("%lu, %lu, ", n1, n2);
	for (i = 2 ; i <= 98 ; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (i == 98)
		{
			printf("%lu\n", n3);
		}
		else
		{
			printf("%lu, ", n3);
		}
	}
	return (0);
}
