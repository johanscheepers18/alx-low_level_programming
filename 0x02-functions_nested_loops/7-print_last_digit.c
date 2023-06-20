#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - entry point
 * @x: is used as the number to find the last digit of
 * Return: returns the last digit of x
 */
int print_last_digit(int x)
{
	int i;

	i = abs(x) % 10;

	_putchar(i + '0');

	return (i);
}
