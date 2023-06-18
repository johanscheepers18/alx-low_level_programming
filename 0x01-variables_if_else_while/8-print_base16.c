#include <stdio.h>

/**
 * main - Entry point
 * Description: This program is used to print all the numbers used in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 48 ; num < 58 ; num++)
	{
		putchar(num);
	}

	for (letter = 'a' ; letter < 'g' ; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
