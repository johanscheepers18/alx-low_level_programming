#include "main.h"

/**
 * *_strcpy - used to copy a string from the source to the destination
 * @dest: destination of the copied string
 * @src: the source of the string to be copied from
 * Return: returns the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
