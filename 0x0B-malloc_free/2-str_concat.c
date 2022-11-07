#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: new pointer that contain s1, s2, and null
 */

char *str_concat(char *s1, char *s2)
{
	int j, i = 0;
	char *p;
	int l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0 ; s1[j] || s2[j] ; j++)
	{
		i++;
	}
	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0 ; s1[j] ; j++)
		{
			p[l++] = s1[j];
		}
		for (j = 0 ; s2[j] ; j++)
		{
			p[l++] = s2[j];
		}
	}
	return (p);
}
