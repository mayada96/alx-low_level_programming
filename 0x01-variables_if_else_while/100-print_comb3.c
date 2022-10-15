#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: return 0 on success
 */

int main(void)
{
	int n1 = 0;
	int n2;

	while (n1 <= 8)
	{
		n2 = n1 + 1;
		for ( ; n2 <= 9 ; n2++)
		{
		putchar(n1 + '0');
		putchar(n2 + '0');
		if ((n1 == 8) && (n2 == 9))
		{
			break;
		}
			putchar(44);
			putchar(' ');
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
