#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory
 * @nmemb: array of members
 * @size: bytes of elements
 *
 * Return: the allocation of memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *pl;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	pl = p;
	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		pl[i] = '\0';
	}
	return (p);
}
