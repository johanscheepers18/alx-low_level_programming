#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 * @c: The character to check if lowercase or other
 * Description: this program is used to return 1 if the input is lowercase,
 * or 0 if other.
 * Return: 1 if lowercase, 0 if other
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
