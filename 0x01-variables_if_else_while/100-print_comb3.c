#include <stdio.h>

/**
 * main - Entry point
 * Description: This program is used to print all combonations of
 * single digit numbers, except those that have the same digits (eg. 88, 77)
 * Return: Always 0
 */
int main(void)
{
	int asciiNum[] = {44, 32};
	int firstNum, secNum, ascSym;

	for (firstNum = 48 ; firstNum < 58 ; firstNum++)
	{
		for (secNum = 48 ; secNum < 58 ; secNum++)
		{
			if (secNum > firstNum)
			{
				putchar(firstNum);
				putchar(secNum);

				if (firstNum != 56 || secNum != 57)
				{
					for (ascSym = 0 ; ascSym < 2 ; ascSym++)
					{
						putchar(asciiNum[ascSym]);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
