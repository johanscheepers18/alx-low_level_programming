#include "main.h"
#include <stdio.h>

/**
 * _strstr - checks if needle is in haystack
 * @haystack: string to be used if needle exists
 * @needle: string used for check
 * Return: return the first occurence of needle, else return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
