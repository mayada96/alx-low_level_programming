#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: number of bytes to be fill
 * @c: chareckter to be filled with
 *
 * Return: array of char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		p[i] = c;
	}
	return (p);
}
