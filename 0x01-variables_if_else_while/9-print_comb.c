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

	while (n <= 8)
	{
		putchar(n + '0');
		putchar(44);
		putchar(' ');
		n++;
	}
	putchar(s + '0' + '\n');
	return (0);
}

