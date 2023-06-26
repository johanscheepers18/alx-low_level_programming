#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: The string
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int i, x;

	x = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		x++;
	}

	return (x);
}
