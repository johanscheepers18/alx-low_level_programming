#include "main.h"

/**
 * _strspn - is used to see how many bytes in the first segment of s,
 * contains the same bytes that appears in accept
 * @s: the string used
 * @accept: the bytes that will be used to look for in s
 * Return: returns the amount of times bytes from accept,
 * appears in the first segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	z = 0;

	for (x = 0; s[x] != ' ' && s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
			}
		}
	}

	return (z);
}
