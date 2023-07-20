#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints all arguments
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of all the argument types
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	int x = 0, y = 0;
	char *separator = ", ";
	char *st;

	va_start(vl, format);

	while (format && format[x])
	{
		x++;
	}
	while (format && format[y])
	{
		if (y == (x - 1))
			separator = "";
		switch (format[y])
		{
			case 'c':
				printf("%c%s", va_arg(vl, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(vl, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(vl, double), separator);
				break;
			case 's':
				st = va_arg(vl, char *);
				if (st == NULL)
					st = "(nil)";
				printf("%s%s", st, separator);
				break;
		}
		y++;
	}

	va_end(vl);
	printf("\n");
}
