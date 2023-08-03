#include "main.h"

/**
 * get_bit - gets the bit at a certain index
 * @n: range of numbers
 * @index: index of the bit
 * Return: returns the bit or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > 64)
	{
		return (-1);
	}

	else
	{
		x = n >> index;
		return (x & 1);
	}
}
