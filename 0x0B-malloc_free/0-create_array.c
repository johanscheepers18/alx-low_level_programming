#include "main.h"
#include <stdlib.h>

/**
 * create_array - is used to create an array
 * @size: size of the array
 * @c: char that should be in the array
 * Return: null if size is zero else return the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;
	char *ptr;

	if (size == 0)
	{
		return ('\0');
	}

	arr = (char *)malloc(size * c);

	for (i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}

	ptr = arr;

	return (ptr);
}
