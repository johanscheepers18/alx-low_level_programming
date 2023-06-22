#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the height and width of the triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size == 1)
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
				else if (y < size - x)
				{
					_putchar(' ');
				}
			}

			_putchar('\n');
		}
	}
}
