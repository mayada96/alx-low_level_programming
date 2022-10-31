#include "main.h"
#include <string.h>

/**
 * _strpbrk - return the string from the first accurince of accept
 * @s: pointer to string searching on
 * @accept: pointer to string searching for
 *
 * Return: the string from the accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (NULL);
}
