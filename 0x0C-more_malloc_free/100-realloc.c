#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates old to new, set conditions from problem
 * @ptr: pointer to memory prev alloc, must free end
 * @old_size: input old
 * @new_size: input new
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *d, *src;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	d = malloc(new_size);
	if (d == NULL)
	{
		return (NULL);
	}
	src = ptr;
	for (i = 0; i < new_size && i < old_size; i++)
	{
		d[i] = src[i];
	}
	free(ptr);
	return (d);
}
