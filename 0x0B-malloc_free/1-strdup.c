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
	char *p;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(i + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		memcpy(p, str, (i + 1));
	}
	return (p);
}

