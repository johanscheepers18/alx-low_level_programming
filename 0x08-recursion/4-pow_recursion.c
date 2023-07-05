#include "main.h"

/**
 * _pow_recursion - calculates x to the power of y
 * @x: base number
 * @y: exponent
 * Return: returns x to the power of y if y is bigger than zero,
 * if y is less than zero returns -1,
 * if y is equal to zero returns 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (1);
}
