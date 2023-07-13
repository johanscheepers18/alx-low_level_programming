#include "main.h"
#include <stdlib.h>

/**
 * _calloc - creates an array
 * @nmemb: amount of elements
 * @size: size of each element inside the array
 * Return: returns the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;
	char *arr2;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}

	arr2 = arr;

	for (i = 0 ; i < (size *nmemb) ; i++)
	{
		arr2[i] = '\0';
	}

	return (arr);
}
