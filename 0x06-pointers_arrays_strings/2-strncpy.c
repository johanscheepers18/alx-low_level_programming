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
	int i, len1, len2;

	len1 = 0, len2 = 0;

	while (src[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		len2++;
	}

	if (n > len1)
	{
		for (i = 0 ; i < len2 ; i++)
		{
			if (src[i] != '\0')
			{
				dest[i] = src[i];
			}
			else
			{
				dest[i] = ' ';
			}
		}
		dest[i] = '\0';
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
