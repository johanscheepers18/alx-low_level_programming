#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog using struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns NULL on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nameLen, ownerLen, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (nameLen = 0 ; name[nameLen] != '\0' ; nameLen++)
	{
		;
	}
	nameLen++;
	dog->name = malloc(nameLen * sizeof(char));
	for (x = 0 ; x < nameLen ; x++)
	{
		dog->name[x] = name[x];
	}
	dog->age = age;
	for (ownerLen = 0 ; owner[ownerLen] != '\0' ; ownerLen++)
	{
		;
	}
	ownerLen++;
	dog->owner = malloc(ownerLen * sizeof(char));
	for (x = 0 ; x < ownerLen ; x++)
	{
		dog->owner[x] = owner[x];
	}
	return (dog);
}
