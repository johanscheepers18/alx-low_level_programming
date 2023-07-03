#include "main.h"

/**
 * _strchr - is used to look for the first instance of c in s
 * @s: string to used for checking if c exists
 * @c: charcter to look for in s
 * Return: return s if c is available, else returns NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	else
	{
		return ('\0');
	}
}
