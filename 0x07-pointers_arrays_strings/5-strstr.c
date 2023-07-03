#include "main.h"

/**
 * _strstr - checks if needle is in haystack
 * @haystack: string to be used if needle exists
 * @needle: string used for check
 * Return: return the first occurence of needle, else return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
			needle++;
		}

		haystack++;
	}

	return ('\0');
}
