#include <stdio.h>

/**
 * main -entry point
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q')
			continue;
		else if (ch == 'e')
			continue;
	putchar(ch);
	}
	putchar ('\n');
	return (0);
}
