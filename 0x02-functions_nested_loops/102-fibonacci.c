#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successfuly printing numbers
 */

int main(void)
{
	int i;
	long int n[50];

	n[0] = 1;
	n[2] = 2;
	printf("%ld, %ld, ", n[0], n[1]);
	for (i = 2 ; i < 50 ; i++)
	{
		n[i] = n[i - 1] + n[i - 2];
		if (i == 49)
		{
			printf("%ld", n[i]);
			break;
		}
		else
		{
			printf("%ld, ", n[i]);
		}
	}
	printf("\n");
	return (0);
}
