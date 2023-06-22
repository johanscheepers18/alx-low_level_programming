#include <stdio.h>

/**
 * fizz_buzz - this program is the solution to the popular coding interview
 * challange called FizzBuzz
 */
void fizz_buzz(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
			putchar(' ');
		}
	}

	putchar('\n');
}
