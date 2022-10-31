#include "main.h"
#include <string.h>

/**
 * _strspn - count the number that accept is in s
 * @s: ponter to string
 * @accept: pointer to the string to be calculater
 *
 * Return: the number of acceppt accured in string s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s++))
	{
		count++;
	}
	return (count);
}
