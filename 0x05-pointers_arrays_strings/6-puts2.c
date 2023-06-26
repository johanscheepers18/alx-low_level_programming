#include "main.h"

/**
 * puts2 - prints every other character from a string
 * @str: given string to be used in the function
 */
void puts2(char *str)
{
	int i, x;

	x = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		x++;
	}

	if (x > 0)
	{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
			}

			if (str[i + 1] == '\0')
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
