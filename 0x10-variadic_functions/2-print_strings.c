#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints all strings
 * @separator: separator to be used
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *c;
	unsigned int i;
	va_list vl;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(vl, char*);

		if (c == NULL)
		{
			c = "(nil)";
		}

		printf("%s", c);

		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(vl);

	printf("\n");
}
