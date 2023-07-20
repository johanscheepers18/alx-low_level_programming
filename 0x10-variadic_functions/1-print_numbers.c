#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all the numbers
 * @separator: the separator to be used
 * @n: the variadic numbers
 * Return: returns on fail
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));

		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(vl);

	printf("\n");
}
