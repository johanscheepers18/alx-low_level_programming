#include "main.h"

void _puts(char *str)
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
			_putchar(str[i]);
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
