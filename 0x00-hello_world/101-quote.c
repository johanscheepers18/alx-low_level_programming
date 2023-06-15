#include <unistd.h>

/**
 * main - Enters the program
 * Description: this program prints a string to the stderror
 * Return: Always 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 56);

	return (1);
}
