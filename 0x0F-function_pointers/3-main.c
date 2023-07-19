#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: index of arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	oper = get_op_func(argv[2]);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", oper(a, b));
	return (0);
}
