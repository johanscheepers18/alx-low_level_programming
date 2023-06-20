#include "main.h"

/**
 * main - Entry point
 * Description: this program print _putchar with only using the putchar funct
 * Return: Always 0
 */
int main(void)
{
	char str[8] = "_putchar";

	int i;

	for (i = 0 ; i <= 7 ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
