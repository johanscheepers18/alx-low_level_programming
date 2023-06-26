#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, x, y;
	char newS;

	x = 0;
	
	y = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		x++;
	}

	y = x - 1;

	if (x > 0)
	{
		for (i = 0 ; i < x / 2 ; i++)
		{
			newS = s[i];
			s[i] = s[y];
			s[y--] = newS;
		}
	}
}	
