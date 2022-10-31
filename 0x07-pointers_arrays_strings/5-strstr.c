#include "main.h"
#include <string.h>

/**
 * _strstr - print string 1 starting from string 2
 * @haystack: pointer to string 1
 * @needle: pointer to string 2
 *
 * Return: string 1 starting for string 2 if found
 */

char *_strstr(char *haystack, char *needle)
{
	char *ph;
	size_t n = strlen(needle);

	ph = haystack;
	while (*ph)
	{
		if (!memcmp(ph, needle, n))
		{
			return (ph);
		}
		ph++;
	}
	return (NULL);
}
