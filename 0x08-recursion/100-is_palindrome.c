#include "main.h"

/**
 * palindrome_test - is used to check if the word is a palindrome
 * @s: word to be checked
 * @y: used to iterate through the word
 * @z: word length
 * Return: return 1 if palindrome else returns 0
 */
int palindrome_test(char *s, int y, int z)
{
	if (*(s + y) != *(s + z - 1))
	{
		return (0);
	}

	if (y >= z)
	{
		return (1);
	}

	return (palindrome_test(s, y + 1, z - 1));
}

/**
 * _strlen_recursion - calculates the word length
 * @s: the word to calculate the length of
 * Return: returns 0 if the string is empty else returns the length of the word
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - entry point of the program
 * @s: the word to be used during the check
 * Return: return 1 if the word is empty
 * else enters the palindrome test and calculates word lenght
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return (palindrome_test(s, 0, _strlen_recursion(s)));
}
