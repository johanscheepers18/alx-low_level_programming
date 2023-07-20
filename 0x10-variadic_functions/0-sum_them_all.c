#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns sum of all numbers
 * @n: the variadic inputs
 * Returns: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, sum;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(vl, n);

	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(vl, const unsigned int);
	}

	va_end(vl);

	return (sum);
}
