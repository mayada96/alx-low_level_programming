#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of a string
 * @str: the pointer to the string array
 *
 * Return: the half string
 */

void puts_half(char *str)
{
	int i, e, o;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (e = i / 2 ; str[i] ; i++)
		{
			printf("%d", str[e]);
		}
	}
	else
	{
		for (o = (i - 1) / 2 ; o < (i - 2) ; o++)
		{
			printf("%d", str[o + 1]);
		}
	}

	printf("\n");
}
