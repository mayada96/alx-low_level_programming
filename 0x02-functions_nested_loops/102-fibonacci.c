#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successfuly printing numbers
 */

int main(void)
{
	int i, n1;
	int n3, n2;

	n1 = 1;
	n2 = 2;
	n3 = 0;
	for (i = 3 ; i <= 50 ; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (i == 50)
		{
			printf("%d", n3);
			break;
		}
		else
		{
			printf("%d, ", n3);
		}
	}
	printf("\n");
	return (0);
}
