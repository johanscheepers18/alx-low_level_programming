#include "main.h"

/**
 * _strncpy - used to copy one string to another
 * @dest: the destination of the copy
 * @src: the string that should be copied
 * @n: the amount of characters that should be coppied
 * Return: returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
