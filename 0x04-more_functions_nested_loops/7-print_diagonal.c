#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n : the width of the diagonal line
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y < x ; y++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
