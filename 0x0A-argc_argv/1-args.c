#include <stdio.h>

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: the string vector og arguments
 *
 * Return: the number of arguments pass to it
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
