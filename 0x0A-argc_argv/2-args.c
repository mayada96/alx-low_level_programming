#include <stdio.h>

/**
 * main -Entry point
 * @argc: number of rguments
 * @argv: string vector of the arguments
 *
 * Return: the arguments in reverse
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
