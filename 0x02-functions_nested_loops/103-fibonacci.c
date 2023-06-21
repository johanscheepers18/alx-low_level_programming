#include <stdio.h>

/**
 * main - entry point
 * Description: Sum of even fibonnaci numbers
 * Return: always 0
 */
int main(void)
{
	int v;
	unsigned long int x, y, z, sum;

	x = 1;
	y = 2;
	sum = 0;

	for (v = 1 ; v <= 33; v++)
	{
		if (x < 4000000 && x % 2 == 0)
		{
			sum = sum + x;
		}

		z = x + y;
		x = y;
		y = z;
	}

	printf("%lu\n", sum);

	return (0);
}
