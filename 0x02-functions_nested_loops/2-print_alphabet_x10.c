#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: Prints the full alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i, x;

	for (i = 0 ; i < 10 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
