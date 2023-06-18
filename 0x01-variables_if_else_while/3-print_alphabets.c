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
				putchar(toupper(alpha[i]));
			}

			if (alpha[i] == 'z' || alpha[i] == 'Z')
			{
				putchar('\n');
			}
		}
		i = 0;
		x++;
	}

	return (0);
}
