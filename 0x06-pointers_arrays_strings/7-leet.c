#include "main.h"

/**
 * leet - encodes a string
 * @a: string to encode
 * Return: returns the encoded string
 */
char *leet(char *a)
{
	int i, x;
	char enc[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (x = 0 ; x < 10 ; x++)
		{
			if (enc[x] == a[i])
			{
				a[i] = num[x];
			}
		}
	}

	return (a);
}
