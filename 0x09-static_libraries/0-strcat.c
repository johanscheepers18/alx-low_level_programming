#include "main.h"

/**
 * _strcat - used to add two strings together
 * @dest: destination of combined strings
 * @src: string that should be added to dest.
 * Return: return the dest string using its pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
