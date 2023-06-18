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
	int num, ascSym;

	for (num = 48 ; num < 58 ; num++)
	{
		putchar(num);

		for (ascSym = 0 ; ascSym < 2 ; ascSym++)
		{
			putchar(asciiArr[ascSym]);
		}
	}
	putchar('\n');

	return (0);
}
