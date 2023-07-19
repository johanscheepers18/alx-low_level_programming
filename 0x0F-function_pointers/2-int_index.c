#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - prints the index of a value,
 * that matches requirement of a function
 * @array: array to used
 * @size: size of the array
 * @cmp: function to be used
 * Return: returns -1 if size is less than zero or no matches
 *		returns the array index if match was found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0 || array == NULL)
	{
		return (-1);
	}

	for (i = 0 ; i < size ; i++)
	{
		x = cmp(array[i]);

		if (x != 0)
		{
			return (i);
		}
	}

	return (-1);
}
