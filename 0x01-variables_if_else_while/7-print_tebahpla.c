#include <stdio.h>

/**
 * main - Entry point
 * Description: This program is used to print the alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
