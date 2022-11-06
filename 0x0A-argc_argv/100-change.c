#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the arguments count
 * @argv: the vector string of arguments
 *
 * Return: the minimum number of coins to make change for an amount of money
 */

int main(int argc, char *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1};
	int i, count = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0 ; i < 5 ; i++)
		{
			while (amount >= coin[i])
			{
				count = count + 1;
				amount = amount - coin[i];
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
