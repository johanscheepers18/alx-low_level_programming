#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array to reverse
 * @n: the amount of inetegers in the array
 */
void reverse_array(int *a, int n)
{
	int i, x, y;

	y = 0;
	i = n - 1;

	while (y < i)
	{
		x = a[y];
		a[y] = a[i];
		a[i] = x;
		y++;
		i--;
	}
}
