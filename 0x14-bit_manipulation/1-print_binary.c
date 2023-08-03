#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be used
 * Return; returns on completion
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 0;
	int y;

	if (n == 0)
	{
		_putchar('0' + 0);
		return;
	}

	for (x = n, y = 0 ;  (x >>= 1) > 0 ; y++)
	{
		;
	}

	for (; y >= 0 ; y--)
	{
		if ((n >> y) & 1)
		{
			_putchar('0' + 1);
		}
		else
		{
			_putchar('0' + 0);
		}
	}
}
