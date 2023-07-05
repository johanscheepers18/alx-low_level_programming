#include "main.h"

/**
 * _sqrt - used to calculate the sqrt of x
 * @x: value to calculate the sqrt of
 * @y: this value get incremented until it's the sqrt of x
 * Return: return negative one if their is no sqrt for x,
 * returns y if y is the sqrt of x,
 */
int _sqrt(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}

	else if (y * y == x)
	{
		return (y);
	}
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - is used to access _sqrt to calculate the sqrt of n
 * @n: value gets used as x in _sqrt
 * Return: entry point for _sqrt function
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
