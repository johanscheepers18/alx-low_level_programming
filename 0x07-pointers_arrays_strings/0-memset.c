#include "main.h"

/**
 * _memset - is used to change the first n amount of bytes to b
 * @s: input string
 * @b: new byte value
 * @n: amount of bytes to alter
 * Return: returns the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
