#include <stdio.h>

/**
 * main -Entry poinr
 *
 * Return: 0 when success
 */

int main(void)
{
	int A = 0;
	int B;
	int C;
	int D;

	while (A <= 9)
	{
		B = 0;
		while (B <= 8)
		{
			C = 0;
			while (C <= 9)
			{
				for (D = 1 ; D <= 9 ; D++)
				{
					putchar(A + '0');
					putchar(B + '0');
					putchar(' ');
					putchar(C + '0');
					putchar(D + '0');
				if((A == 9) && (B == 8) & (C == 9) && (D == 9))
				{
							break;
				}
							putchar(44);
							putchar(' ');
				}
				C++;
			}
			B++;
		}
		A++;
	}
					putchar('\n');
					return (0);
}
