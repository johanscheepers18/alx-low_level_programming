#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: the length of the file name
 * @argv: the array of the file name
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
