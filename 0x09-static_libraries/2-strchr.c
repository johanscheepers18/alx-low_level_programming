#include "main.h"
#include <stdio.h>

/**
 * _strchr - is used to look for the first instance of c in s
 * @s: string to used for checking if c exists
 * @c: charcter to look for in s
 * Return: return s if c is available, else returns NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
