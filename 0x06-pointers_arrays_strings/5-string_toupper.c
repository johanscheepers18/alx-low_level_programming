#include "main.h"

/**
 * string_toupper - converts all lowercase characters to uppercase
 * @a: the inputs string
 * Return: returns the string with all uppercase letters
 */
char *string_toupper(char *a)
{
	int i;
	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}

		i++;
	}
	
	return (a);
}
