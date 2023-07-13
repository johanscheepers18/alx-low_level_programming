#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - combines two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from first string
 * Return: returns the combined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0;
	char *concat = NULL;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		k++;
	}

	for (i = 0 ; i < n && s2[i] != '\0' ; i++)
	{
		k++;
	}

	concat = (char *)malloc(k + 1 * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			concat[i] = s1[i];
		}

		for (j = 0 ; i < k ; j++)
		{
			concat[i] = s2[j];
			i++;
		}

		concat[i] = '\0';
	}

	return (concat);
}
