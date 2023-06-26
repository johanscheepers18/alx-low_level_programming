#include "main.h"

/**
 * swap_int - swap two values using their pointers
 * @a: value one
 * @b: value two
 */
void swap_int(int *a, int *b)
{
	int tempA;

	tempA = *a;
	*a = *b;
	*b = tempA;
}
