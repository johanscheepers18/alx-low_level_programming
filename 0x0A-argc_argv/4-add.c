#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts char to int
 * @s: char to be converted
 * Return: returns the converted string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - entry point
 * @argc: the amount of arguments
 * @argv: array that contains the arguments
 * Return: 1 if error else 0
 */
int main(int argc, char *argv[])
{
	int v, w, x;

	v = 0;

	for (w = 1 ; w < argc ; w++)
	{
		for (x = 0 ; argv[w][x] != '\0' ; x++)
		{
			if (argv[w][x] > '9' || argv[w][x] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (w = 1 ; w < argc ; w++)
	{
		x = _atoi(argv[w]);
		if (x >= 0)
		{
			v += x;
		}
	}

	printf("%d\n", v);
	return (0);
}
