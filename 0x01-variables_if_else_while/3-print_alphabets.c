#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: This program is used to print the,
 * alphabet in lowercase and in uppercase.
 * Return: Always 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	char letter;

	int i, x;

	x = 0;

	while (x < 2)
	{
		for (i = 0 ; i <= 25 ; i++)
		{

			if (x == 0)
			{
				putchar(alpha[i]);
			}

			else if (x == 1)
			{
				letter = toupper(alpha[i]);
				putchar(letter);
			}

			if (letter == 'Z')
			{
				putchar('\n');
			}
		}
		i = 0;
		x++;
	}

	return (0);
}
