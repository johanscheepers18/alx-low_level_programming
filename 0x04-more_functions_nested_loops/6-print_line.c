#include "main.h"

/**
 * print_line - prints a line of n width
 * @n: max width of the line that should be printed
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
