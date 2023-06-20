#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: integer used as the starting point
 * Description: This program is to print every natural number from n upto 98
 */
void print_to_98(int n)
{
	int start = n;

	if (start < 98)
	{
		while (start <= 98)
		{
			if (start != 98)
			{
				printf("%d, ", start);
			}
			else
			{
				printf("%d\n", start);
			}
			start++;
		}
	}
	else
	{
		while (start >= 98)
		{
			if (start != 98)
			{
				printf("%d, ", start);
			}
			else
			{
				printf("%d\n", start);
			}
			start--;
		}
	}
}
