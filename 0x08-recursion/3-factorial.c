#include "main.h"

/**
 * factorial - gives the factorial number of n
 * @n: number that the factorial number should be genrated from
 * Return: returns the factorial number if n is bigger than 0,
 * if n is equal to 0 return 1,
 * if n is negative return -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n > 0)
	{
		return(n * factorial(n - 1));
	}

	return (1);
}
