#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the height and width of the triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	z = size;

	if (size == 1)
	{
		_putchar('#');
	}
	else if (size > 1)
	{
		for (x = 1 ; x <= size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				if (y == size - x)
				{
					for (z = size - x ; z < size ; z++)
					{
						_putchar('#');
					}
				}
				else
				{
					_putchar(' ');
				}
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
