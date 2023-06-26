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

	if (x % 2 == 0)
	{
		for (y = x / 2 ; str[y] != '\0' ; y++)
		{
			_putchar(str[y]);
		}
	}
	else if (x % 2 != 0)
	{
		for (n = (x - 1) / 2 ; n < x - 1 ; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
