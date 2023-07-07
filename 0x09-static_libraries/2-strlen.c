#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: The string
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
