#include "main.h"
#include <stddef.h>

/**
 * _strchr - return the string of matching c
 * @s: pointer to string
 * @c: the chareckter to matched
 *
 * Return: the pointer to matched string chareckter
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	}
		while (*s++);
		return (0);
}
