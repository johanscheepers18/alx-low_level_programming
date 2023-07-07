#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: the amount of arguments
 * @argv: unused
 * Return: return 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, x;

	x = 0;

	for (i = 0 ; i < argc ; i++)
	{
		x++;
	}

	printf("%d\n", x - 1);
	return (0);
}
