#include "main.h"

/**
 * flip_bits - flip bits to convert bit to another bit
 * @n: first number
 * @m: second number
 * Return: returns the amount of bits that is needed to voncert the numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int x;

	i = n ^ m;
	x = 0;

	while (i)
	{
		x++;
		i &= (i - 1);
	}

	return (x);
}
