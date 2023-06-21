#include <stdio.h>

/**
 * main - entry point
 * Description: prints the sum of all numbers that are multiples of 3 or 5
 * Return: always 0
 */
int main(void)
{
	int i, answer;

	answer = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			answer = answer + i;
		}
	}

	printf("%d\n", answer);
	return (0);
}
