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
	int p = 0;

	while (p == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		p = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (p);
}
