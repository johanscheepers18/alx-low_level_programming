#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all single digit base 10 numbers
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}

	putchar('\n');

	return (0);
}
