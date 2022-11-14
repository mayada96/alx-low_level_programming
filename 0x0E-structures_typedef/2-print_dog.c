#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print the elemnts of the struct
 * @d: the pointer to the structer
 *
 * Return: the elemnts or nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
