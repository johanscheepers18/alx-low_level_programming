#include "main.h"

/**
 * is_prime_number - used to check if a number is a prime number or not
 * @n: the number to be checked
 * Return: returns one if a prime number, else returns 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 ||
			n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}

	else if (n <= 1)
	{
		return (0);
	}

	return (1);
}
