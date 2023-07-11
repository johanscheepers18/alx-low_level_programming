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
	char *arr = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		arr = (char *)malloc(size * sizeof(c));

		if (arr != NULL)
		{
			for (i = 0 ; i < size ; i++)
			{
				arr[i] = c;
			}
		}
	}
	return (arr);
}
