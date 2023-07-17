#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initiates the dog structure
 * @d: the struct to use
 * @name: the dogs name
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: returns on fail
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
