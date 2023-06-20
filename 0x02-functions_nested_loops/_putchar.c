#include <unistd.h>

/**
 * _putchar - writes the char stored at x to stdout
 * @x: The character to print
 * Return: Always 1
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
