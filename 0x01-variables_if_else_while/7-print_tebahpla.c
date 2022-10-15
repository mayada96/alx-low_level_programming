#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: return 0 when success
 */

int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
