#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory where the dog is stored at
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
