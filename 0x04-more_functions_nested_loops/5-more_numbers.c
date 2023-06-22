#include "main.h"

/**
 * more_numbers - prints all numbers from 0 to 14, 14 times over
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0 ; i < 14 ; i++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}

			_putchar(n % 10 + '0');
		}

		_putchar('\n');
	}
}
