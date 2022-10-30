#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successfuly printing numbers
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 50 ; i++)
	{
		if (i == 50)
		{
			printf("%d", i);
			break;
		}
		else
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
	return (0);
}
