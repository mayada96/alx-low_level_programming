#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: number of bytes
 *
 * Return: tha allocation in success the 98 in not
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
