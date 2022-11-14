#ifndef DOG_H

#define DOG_H

/**
 * struct dog - struct that define name, age, and owner og the dog pobby
 * @name: the first element of the struct
 * @age: the second element
 * @owner: the third element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
