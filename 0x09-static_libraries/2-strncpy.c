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

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
