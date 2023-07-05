#include "main.h"

/**
 * _strlen_recursion - returns the string length
 * @s: string to be used
 * Return: Return the length of the string else returns 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
