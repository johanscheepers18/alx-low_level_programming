#include "main.h"

/**
 * cap_string - is used to cap all words in a string
 * @a: the string to be used
 * Return: returns the new string
 */
char *cap_string(char *a)
{
	int i, x;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0)
			{
				a[i] = a[i] - 32;
			}
			else
			{
				for (x = 0 ; x < 13 ; x++)
				{
					if (sep[x] == a[i - 1])
					{
						a[i] = a[i] - 32;
					}
				}
			}
		}
	}

	return (a);
}
