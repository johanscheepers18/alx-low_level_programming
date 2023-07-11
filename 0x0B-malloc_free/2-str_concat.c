#include "main.h"
#include <stdlib.h>

/**
 * str_concat - used to add two strings together
 * @s1: string 1
 * @s2: string 2
 * Return: return null or the string ouput
 */
char *str_concat(char *s1, char *s2)
{
	char *combined = NULL;
	int i, j, k, l;

	l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (j = 0 ; s1[j] != '\0' ; j++)
	{
		;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (k = 0 ; s2[k] != '\0' ; k++)
	{
		;
	}
	combined = (char *)malloc((j + k + 1) * sizeof(char));
	if (combined == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		combined[i] = s1[i];
	}
	for (; s2[l] != '\0' ; i++)
	{
		combined[i] = s2[l];
		l++;
	}
	return (combined);
}
