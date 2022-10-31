#include "main.h"

/**
 * _memset - filling the first n bytes of memory with value b
 * @s: pointer to the memory to be filled
 * @b: the value to filled with
 * @n: the number of bytes to be filled
 *
 * Return: apointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
