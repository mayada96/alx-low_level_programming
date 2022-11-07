#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the str to be duplicated
 *
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	size_t i = strlen(str) + 1;
	char *p;

	p = malloc(sizeof(i) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		memcpy(p, str, (sizeof(i) + 1));
	}
	return (p);
}

