#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string that should be reversed
 */
void print_rev(char *s)
{
	int i, x;

	x = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		x++;
	}

	if (x > 0)
	{
		for (; x != -1 ; x--)
		{
			_putchar(s[x]);

			if (x - 1 == -1)
			{
				_putchar('\n');
			}
		}
	}

	else
	{
		_putchar('\n');
	}
}
