#include "main.h"

/**
 * *_strcpy - copy string from one pointer to another
 * @dest:the sirst pointer
 * @src: the second pointer
 *
 * Return: the copied of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
