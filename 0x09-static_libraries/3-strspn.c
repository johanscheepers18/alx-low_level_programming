#include "main.h"

/**
 * _strspn - is used to see how many bytes in the first segment of s,
 * contains the same bytes that appears in accept
 * @s: the string used
 * @accept: the bytes that will be used to look for in s
 * Return: returns the amount of times bytes from accept,
 * appears in the first segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
