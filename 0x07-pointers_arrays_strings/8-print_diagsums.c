#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - is used to print the diagonal sum of a square
 * @a: array containing all the values
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, x, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	k = size - 1;
	x = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[x];
			}

			if (j == k)
			{
				sum2 = sum2 + a[x];
			}

			x++;
		}
		k--;
	}
	printf("%d, %d\n", sum1, sum2);
}
