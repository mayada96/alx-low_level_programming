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

	for ( ; n <= 7 ; n++)
	{
		m = n + 1;
		for ( ; m <= 8 ; m++)
		{
			l = m + 1;
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
		}
	}
	putchar('\n');
	return (0);
}
