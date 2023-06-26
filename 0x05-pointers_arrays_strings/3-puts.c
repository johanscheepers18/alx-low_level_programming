#include "main.h"

/**
 * _puts - used to print a string
 * @str: inputt value using pointer
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
		{
			_putchar('\n');
		}
	}
}
