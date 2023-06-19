#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a combination of any three digits
 * without matching combinations
 * Return: Always 0
 */
int main(void)
{
	int firstNum, secNum, thrdNum;

	for (firstNum = 48 ; firstNum < 56 ; firstNum++)
	{
		for (secNum = 48 ; secNum < 57 ; secNum++)
		{
			for (thrdNum = 48 ; thrdNum < 58 ; secNum++)
			{
				if (thrdNum > secNum && secNum > firstNum)
				{
					putchar(firstNum);
					putchar(secNum);
					putchar(thrdNum);
					if (firstNum != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
