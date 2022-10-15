#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: return 0 when success
 */

int main(void)
{
	int n = 0;
	int s = 9;
	
	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
