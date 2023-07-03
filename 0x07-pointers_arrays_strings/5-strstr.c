#include "main.h"

/**
 * _strstr - checks if needle is in haystack
 * @haystack: string to be used if needle exists
 * @needle: string used for check
 * Return: return the first occurence of needle, else return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, y, z, comp;
	char *start;

	x = 0;
	y = 0;

	while (needle[x] != '\0')
	{
		x++;
	}
	if (x == 0)
	{
		return (haystack);
	}

	while (haystack[y] != '\0')
	{
		if (haystack[y] == needle[0])
		{
			start = &haystack[y];
			z = y;
			comp = 0;
			for (i = 0; i < x; i++)
			{
				if (haystack[z] == needle[i])
				{
					comp++;
				}
				z++;
			}
		}
		if (comp == x)
		{
			return (start);
		}
		y++;
	}
	return ('\0');
}
