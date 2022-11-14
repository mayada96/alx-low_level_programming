#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog struct
 * @name: the new name
 * @age: the new age
 * @owner: the new owner
 *
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i = 0, j = 0, l;
	char *namecp, *ownercp;

	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	namecp = malloc(i + 1);
	for (l = 0 ; name[l] ; l++)
	{
		namecp[l] = name[l];
	}
	namecp[l] = '\0';
	ownercp = malloc(j + 1);
	for (l = 0 ; owner[l] ; l++)
	{
		ownercp[l] = owner[l];
	}
	ownercp[l] = '\0';
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}