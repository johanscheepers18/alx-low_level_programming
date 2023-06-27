#include "main.h"

/**
 * _atoi - converts the string to integer
 * @h: string used to convert to int
 * Return: Returns 0 if no number is found in the string,
 * returns f for the number found in the string
 */
int _atoi(char *h)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (h[a] != '\0')
		a++;

	while (b < a && c == 0)
	{
		if (h[b] == '-')
			d++;

		if (h[b] <= '9' && h[b] >= '0')
		{
			e = h[b] - '0';
			if (d % 2)
				e = -e;
			f = f * 10 + e;
			c = 1;
			if (h[b + 1] > '9' || h[b + 1] < '0')
				break;
			c = 0;
		}
		b++;
	}
	if (c == 0)
		return (0);

	return (f);
}
