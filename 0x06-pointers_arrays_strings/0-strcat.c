#include "main.h"

/**
 * _strcat - used to add two strings together
 * @dest: destination of combined strings
 * @src: string that should be added to dest.
 * Return: return the dest string using its pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i, x;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	for (i = 0 ; src[i] == '\0' ; i++)
	{
		dest[x] = src[i];
		x++;
	}

	return (dest);
}
