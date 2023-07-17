#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct d with all the required values
 * @d: the struct to use
 * Return: returns nothing if d is empty fail
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

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
