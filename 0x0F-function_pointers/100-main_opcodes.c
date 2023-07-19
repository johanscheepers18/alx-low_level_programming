#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the op code of its own main function
 * @argc: amount of arguments
 * @argv: array of arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	char *x = (char *) main;
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0 ; i < j ; i++)
	{
		printf("%02x", x[i] & 0xFF);
		if (i != j - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
