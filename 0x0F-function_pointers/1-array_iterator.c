#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates over an array and prints each value
 * @array: array to use
 * @size: size of the array
 * @action: function to be used
 * Return: returns on fail
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
