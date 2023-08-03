#include "main.h"

/**
 * set_bit - sets the value of a bit at index to 1
 * @n: range of number
 * @index: index of the bit
 * Return: returns 1 on success else return 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 64)
	{
		return (-1);
	}

	for (x = 1 ; index > 0 ; index--, x *= 2)
	{
		;
	}

	*n += x;

	return (1);
}
