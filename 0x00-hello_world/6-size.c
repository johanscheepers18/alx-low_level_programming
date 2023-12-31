#include <stdio.h>

/**
 *main - Entry point
 *Description: this program prints different value sizes
 *Return: Always 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	/*Prints the size of a char value */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	/*Prints the size of an int value */
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	/*Prints the size of a long int value */
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	/*Prints the size of a long long int value */
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
	/*Prints the size of a float value */
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
