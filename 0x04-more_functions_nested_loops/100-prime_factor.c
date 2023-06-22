#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	long int n, largest, x; 

	largest = 0;
	
	n = 612852475143;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	for (x = 3 ; x < sqrt(n) ; x = x + 2)
	{
		while (n % x == 0)
		{
			largest = x;
			n = n / x;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	printf("%ld\n", largest);
	return (0);
}
