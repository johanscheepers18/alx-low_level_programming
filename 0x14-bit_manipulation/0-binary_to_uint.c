#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string to be converted
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (x = 1, y = 0, i-- ; i >= 0 ; i--, x *= 2)
	{
		if (b[i] == '1')
		{
			y += x;
		}
	}

	return (y);
}
