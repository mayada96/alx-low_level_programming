#include "main.h"
#include <ctype.h>

/**
 * rot13 - encode a string using ROT13 approch
 * @x: apointer to the string
 *
 * Return: the encoded string
 */

char *rot13(char *x)
{
	int j, i = 0;
	char cod[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (x[i] != '\0')
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (x[i] == cod[j])
			{
				x[i] = rot[j];
				break;
			}
		}
		i++;
	}
		return (x);
}
