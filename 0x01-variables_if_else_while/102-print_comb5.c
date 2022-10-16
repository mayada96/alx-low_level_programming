#include <stdio.h>

/**
 * main -Entry poinr
 *
 * Return: 0 when success
 */

int main(void)
{
	int A;
	int B = 0;
	int C;
	int D;

	for (A = 0 ; A <= 9 ; A++)
	{
		while (B <= 8)
		{
			for ( ; C <= 9 ; C++)
			{
				for (D = 1 ; D <= 9 ; D++)
				{
					putchar(A + '0');
					putchar(B + '0');
					putchar(' ');
					putchar(C + '0');
					putchar(D + '0');
				if ((A == 9) && (B == 8) & (C == 9) && (D == 9))
							break;
							putchar(44);
							putchar(' ');
				}
			}
			B++;
		}
	}
					putchar('\n');
					return (0);
							}
