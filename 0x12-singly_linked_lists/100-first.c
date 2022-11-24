#include "lists.h"

void __attribute__((constructor)) printstr(void);

/**
 * printstr - print the string
 *
 * Return: Nothing
 */

void printstr(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
