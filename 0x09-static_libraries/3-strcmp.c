#include "main.h"

/**
 * _strcmp - compares two strings together
 * @s1: first string
 * @s2: second string
 * Return: 0 means the strings are the same,
 * anything else means they are not the same
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
