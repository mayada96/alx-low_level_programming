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
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
