#include <stdio.h>

/**
 * main - couse an infinit loop don't delet it!
 * Return:0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		break;
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
