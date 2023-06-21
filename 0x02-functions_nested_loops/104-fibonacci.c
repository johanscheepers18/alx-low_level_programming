#include <stdio.h>

/**
 * main - entry point
 * Descrption: This program prints the first 98 number in fibonacci
 * Return: always 0
 */
int main(void)
{
	unsigned long int x, y, x1, y1, x2, y2, z;

	x = 1;
	y = 2;

	printf("%lu", x);

	for (z = 0 ; z < 90 ; z++)
	{
		printf(", %lu", y);
		y = y + x;
		x = y - x;
	}

	x1 = x / 1000000000;
	x2 = x % 1000000000;
	y1 = y / 1000000000;
	y2 = y % 1000000000;

	for (z = 91 ; z < 98 ; z++)
	{
		printf(", %lu", y1 + y2 / 1000000000);
		printf("%lu", y2 % 1000000000);
		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;
	}

	printf("\n");

	return (0);
}
