#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n amount of values from an array
 * @a: the array that is being used
 * @n: the amount of values to print from the array
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
