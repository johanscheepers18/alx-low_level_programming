#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array with a range of numbers
 * @min: start of range
 * @max: end of range
 * Return: returns null if an error is found
 * else it returns the array
 */
int *array_range(int min, int max)
{
	int i, diff;
	int *arr = NULL;

	if (min > max)
	{
		return (NULL);
	}

	diff = max - min + 1;

	arr = malloc(diff * sizeof(unsigned int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < diff; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
