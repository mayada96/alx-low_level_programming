#include "main.h"

/**
 * _strncat - cocatenate two strings with n byte
 * @dest: pointer to the first string
 * @src: pounter to the second string
 * @n: byts from secind string
 *
 * Return: cocatination of strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		j++;
	}
	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
