#include "main.h"
#include <stdlib.h>

/**
 * _strdup - used to make a copy of a str
 * @str: string to be used
 * Return: returns null if the string is empty, else returns the string.
 */
char *_strdup(char *str)
{
	char *newStr = NULL;
	int i, j;

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}

	if (j == 0)
	{
		return (NULL);
	}

	else
	{
		newStr = (char *)malloc(j * sizeof(str));

		if (newStr != NULL)
		{
			for (i = 0; i < j; i++)
			{
				newStr[i] = str[i];
			}
		}
	}

	return (newStr);
}
