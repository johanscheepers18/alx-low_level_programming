#include "main.h"

/**
 * *_strcpy - used to copy a string from the source to the destination
 * @dest: destination of the copied string
 * @src: the source of the string to be copied from
 * Return: returns the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i, x;

	x = 1;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		x++;
	}

	for (i = 0 ; i <= x ; i++)
	{
		char a = src[i];

		dest[i] = a;
	}

	return (dest);
}
