#include "main.h"

/**
 * _strpbrk - is used to check if bytes from accept exists in s
 * @s: string to be used
 * @accept: butes to use
 * Return: returns all the bytes that is the same, else return 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}

	if (*s == *accept)
	{
		return (s);
	}

	else
	{
		return ('\0');
	}
}
