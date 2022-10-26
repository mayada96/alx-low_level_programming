#include "main.h"
#include <stdio.h>

/**
 * *_strcat - accomidate the second sting to the first
 * @dest: the first pointer to the first string
 * @src: a pointer to the second string
 *
 * Return: the accomidate of strings
 */

 char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		j++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
