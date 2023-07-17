#include <stdio.h>

/**
 * main - This program prints the file name it was compiled from
 * Return: return 1 on completion
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (1);
}
