#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates multi dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: returns NULL, or the multidimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i, j, *k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		*(arr + i) = (int *)malloc(width * sizeof(int));
		if (*(arr + i) == NULL)
		{
			for (i = 0 ; i < height ; i++)
			{
				k = arr[i];
				free(k);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
