#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: the amount of arguments
 * @argv: array storing the arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
