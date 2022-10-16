#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 on success
 */

int main(void)
{
	int n = 0;
	int m;
	int l;

	while (n <= 8)
	{
		m = n + 1;
		l = n + 2;
		while (m <= 8)
		{
		for ( ; l <= 9 ; l++)
		{
			putchar(n + '0');
			putchar(m + '0');
			putchar(l + '0');
			if ((n == 7) && (m == 8) && (l == 9))
				break;
			putchar(44);
			putchar(' ');
		}
		m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
