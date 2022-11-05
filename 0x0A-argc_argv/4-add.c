#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -Entry point
 * @argc: the arguments number
 * @argv: the vector strinh
 *
 * Return: the sum of yhe enterd number og arguments
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	int j;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] ; j++)
			{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
