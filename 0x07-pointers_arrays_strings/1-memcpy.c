#include "main.h"

/**
 * _memcpy - copy n byte from source to destination
 * @dest: pointer to destination memory
 * @src: pointer to the source buyts to be copied
 * @n: the number of byte to be copied
 *
 * Return: pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pd = dest;
	char *ps = src;
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		pd[i] = ps[i];
	}
	return (dest);
}
