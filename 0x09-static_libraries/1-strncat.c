#include "main.h"

/**
 * _strncat - used to add two strings together,
 * string two is limited by a certain amount of bytes
 * @dest: destination string
 * @src: string that should be added to dest
 * @n: the amount of bytes allowed from src
 * Return: return the combined string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
