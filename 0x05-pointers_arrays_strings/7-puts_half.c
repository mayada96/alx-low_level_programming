#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of a string
 * &str: the pointer to the string array
 *
 * Return: the half string
 */

void puts_half(char *str)
{
	int i, even;
	
	i = 0;
	while (*str != '\0')
	{
	       i++;
	}
	even = (i + 1) / 2;
	
	for (i = even ; str[i] ; i++)
	{
		printf("%d", str[i]);
	}
	printf("\n");
}
