#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: return 0 when success
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n < 9)
		{
		putchar(44);
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
