#include "main.h"

/**
 * leet - encod a string with 1337 aproch
 * @x: pointer to the string
 *
 * Return: the encoded string
 */

char *leet(char *x)
{
	int i, j;
	int upp[] = {65, 76, 84, 69, 79};
	int low[] = {97, 108, 116, 101, 111};
	int num[] = {52, 49, 55, 51, 48};

	for (i = 0 ; x[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (x[i] == upp[j] || x[i] == low[j])
			{
				x[i] = num[j];
			}
		}
	}

	return (x);
}
