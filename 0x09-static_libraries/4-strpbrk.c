#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - is used to check if bytes from accept exists in s
 * @s: string to be used
 * @accept: butes to use
 * Return: returns all the bytes that is the same, else return 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
