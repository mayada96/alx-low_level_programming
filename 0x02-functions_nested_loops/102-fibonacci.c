#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successfuly printing numbers
 */

int main(void)
{
	int i;
	long int n1, n2, n3;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld, ", n1, n2);
	for (i = 3 ; i < 50 ; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (i == 49)
		{
			printf("%ld\n", n3);
		}
		else
		{
			printf("%ld, ", n3);
		}
	}
	return (0);
}
