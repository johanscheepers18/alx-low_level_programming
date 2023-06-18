#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the whole aplhabet excluding 'e' and 'q'
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
