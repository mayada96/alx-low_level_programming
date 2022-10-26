#include "main.h"

/**
 * _strncpy - to copy string one into string 2
 * @dest: pointer to the first string
 * @src: pointer to the second empty string
 * @n: bytes to be copied
 *
 * Return: the copy of the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
