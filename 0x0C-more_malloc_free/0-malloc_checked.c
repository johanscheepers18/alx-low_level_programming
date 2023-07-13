#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory for b
 * @b: number to be allocated memory for
 * Return: returns the memory address
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
