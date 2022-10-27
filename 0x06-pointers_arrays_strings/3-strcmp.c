#include "main.h"

/**
 * _strcmp - compair two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: o on success compartion
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s2 == '\0')
		{
			i = i + 1;
		}
		else if (*s1 < *s2)
		{
			i = i - 1;
		}
		else if (*s1 == *s2)
		{
			i = i + 0;
		}
		else if (*s1 > *s2)
		{
			i = i + 1;
		}
		s1++;
		s2++;
	}
	if (*s2 != '\0' && !*s1)
	{
		i = i - 1;
	}
	return (i);
}
