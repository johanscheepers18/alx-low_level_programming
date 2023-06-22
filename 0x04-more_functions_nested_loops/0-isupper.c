#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if c is uppercase letter
 * @c: used as input for the charater to be checked.
 * Return: if c is uppercase return 1, else it should return 0
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
