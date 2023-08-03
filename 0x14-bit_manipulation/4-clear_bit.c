#include "main.h"

/**
 * clear_bit - changes bit at the index to 0
 * @n: number range
 * index: index of the bit
 * Return: returns 1 if successful or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int y;

	if (index > 64)
	{
		return (-1);
	}

	y = index;

	for (x = 1 ; y > 0 ; x *= 2, y--)
	{
		;
	}

	if ((*n >> index) & 1)
	{
		*n -= x;
	}

	return (1);
}
