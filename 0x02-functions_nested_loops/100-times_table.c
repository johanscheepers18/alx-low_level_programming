#include "main.h"

/**
 * print_times_table - entry point
 * @n: stopping point
 * Description: this program is used to print n * n times table
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (x = 0 ; x <= n ; x++)
		{
			for (y = 0 ; y <= n ; y++)
			{
				z = x * y;
				if (y == 0)
				{
					_putchar(z + '0');
				} else if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				} else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 100 + '0');
					_putchar(z / 10 % 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
