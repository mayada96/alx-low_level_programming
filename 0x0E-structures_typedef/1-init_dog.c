#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the struct dog
 * @name: the name of the dog
 * @age: the seconed e;lement
 * @owner: the third element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
