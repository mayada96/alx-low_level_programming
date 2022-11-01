#include "main.h"
#include <stdio.h>

/**
 * set_string - set a string value to char
 * @s: pointer to string we want to set
 * @to: ointer to string value
 *
 * Return: the s string contaning to value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
