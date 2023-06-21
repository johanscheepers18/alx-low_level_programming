#include <stdio.h>

/**
 * main - entry point
 * Description: This program is use to print the first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	long int x, y, z, n;

	x = 1;
	y = 2;

	for (z = 0 ; z < 50 ; z++)
	{
		if (z != 49)
		{
			printf("%ld, ", x);
		}

		else
		{
			printf("%ld\n", x);
		}

		n = x + y;
		x = y;
		y = n;
	}
	return (0);
}	
