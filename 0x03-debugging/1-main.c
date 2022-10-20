#include "main.h"

/**
 * main - couse an infinit loop
 * Return:0
 */

int main(void)
{
	int i;
	
	printf("Infinite loop incoming :(\n"); /* don’t delete it! */

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n"); /* existing code */

	return (0);
}
