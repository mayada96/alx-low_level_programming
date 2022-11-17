#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog struct
 * @name: the new name
 * @age: the new age
 * @owner: the new owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, l;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; name[i] ; i++)
		;
	i++;
	new_dog->name = malloc(i * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (l = 0 ; l < i ; l++)
	{
		new_dog->name[l] = name[l];
	}
	new_dog->age = age;
	for (j = 0 ; owner[j] ; j++)
		;
	j++;
	new_dog->owner = malloc(j * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (l = 0 ; l < j ; l++)
		new_dog->owner[l] = owner[l];
	return (new_dog);
}
