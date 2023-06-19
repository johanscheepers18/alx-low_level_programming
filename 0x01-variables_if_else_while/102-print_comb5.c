#include <stdio.h>

/**
 * main - Entry point
 * Description: prints any possible combination of any two digit numbers
 * Return: Always 0
 */
int main(void)
{
	int firstNum, secNum;

	for (firstNum = 0; firstNum < 100; firstNum++)
	{
		for (secNum = 0; secNum < 100; secNum++)
		{
			if (firstNum < secNum)
			{
				putchar((firstNum / 10) + 48);
				putchar((firstNum % 10) + 48);
				putchar(32);
				putchar((secNum / 10) + 48);
				putchar((secNum % 10) + 48);
				if (firstNum != 98 || secNum != 99)
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
