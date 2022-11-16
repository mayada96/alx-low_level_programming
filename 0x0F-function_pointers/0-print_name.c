#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print the name
 * @name: pointer to name we want to print
 * @f: pointer function to the name
 *
 * Return: the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
