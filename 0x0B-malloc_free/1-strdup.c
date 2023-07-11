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

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}

	newStr = (char *)malloc(j + 1 * sizeof(char));

	if (newStr != NULL)
	{
		for (i = 0; i < j; i++)
		{
			newStr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}

	newStr[i] = '\0';
	return (newStr);
}
