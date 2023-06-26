#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string used
 */
void puts_half(char *str)
{
	int i, x, y, n;

	x = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		x++;
	}

	if (x > 0)
	{
		n = (x - 1) / 2;
		y = x / 2;

		if (x % 2 == 0)
		{
			for (; y <= x ; y++)
			{
				if (str[y] != '\0')
				{
					_putchar(str[y]);
				}
				else
				{
					_putchar('\n');
				}
			}
		}
		else
			for (; n <= x ; n++)
				if (str[n] != '\0')
					_putchar(str[y]);
				else
					_putchar('\n');
	}
	else
		_putchar('\n');
}
