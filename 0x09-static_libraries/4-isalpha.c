#include "main.h"

/**
 * _isalpha - Entry point
 * @c: is the character to be used as input
 * Description: this program checks if c is a letter or other
 * Return: 1 if c is alpha, 0 if other
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
