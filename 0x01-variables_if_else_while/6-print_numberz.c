#include <stdio.h>

/**
 * main - Entry point
 * Description: This program is used to print all single digit bas 10 numbers
 * Return: Always 0
 */
int main(void)
{
	int num;
	/*
	 * using putchar() 48 is printed as '1' using ASCII
	 * and 58 is printed as '9'.
	 */
	for (num = 48 ; num < 58 ; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
