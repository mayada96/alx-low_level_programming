#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat- concatinate tow string with n
 * @s1: the first string
 * @s2: the second string
 * @n: the number of s2 byte to concatinate
 *
 * Return: the concatination of the tow strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0 ; s1[i] ; i++)
	{
		j++;
	}
	p = malloc(sizeof(char) * j + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0 ; s1[i] ; i++)
	{
		p[j++] = s1[i];
	}
	for (i = 0 ; s2[i] && i < n ; i++)
	{
		p[j++] = s2[i];
	}
	p[j] = '\0';
	return (p);
}
