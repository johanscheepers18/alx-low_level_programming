#include "main.h"

/**
 * _atoi - converst string to integer
 * @h: string used to convert to int
 */
int _atoi(char *h)
{
	int i, j, k, x, y, z, a;

	j = 0;
	k = 0;
	x = 0;
	y = 0;
	z = 0;
	a = 0;

	for (i = 0 ; h[i] != '\0' ; i++)
	{
		x++;
	}

	while(y < x && z == 0)
	{
		if (h[i] == '-')
			++j;

		if (h[i] >= '0' && h[i] <= '9')
		{
			a = s[i] - '0';
			if (a % 2 == 1)
				a = -a;
			k = k * 10 + a;
			z = 1;
			if (h[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		y++;
	}

	if (z == 0)
		return (0);

	return (k);
}
