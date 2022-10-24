#include "main.h"

/**
 * _strlen - return the length of a string
 * @str: the pointer to the string
 *
 * Return: 0 os successfully returning the length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while(*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
