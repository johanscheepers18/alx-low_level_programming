#include <stdio.h>

/**
 * main - Entry point
 * Description: This program is used to print all combinations of
 * single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int asciiArr[] = {44, 32};
	int firstNum, secNum, ascSym;

	for (firstNum = 48 ; firstNum < 58 ; firstNum++)
	{
		for (secNum = 48 ; secNum < 58 ; secNum++)
		{
			if (firstNum != 48)
			{
				putchar(firstNum);
			}

			putchar(secNum);

			for (ascSym = 0 ; ascSym < 2 ; ascSym++)
			{
				putchar(asciiArr[ascSym]);
			}
		}
	}
	putchar('\n');

	return (0);
}
