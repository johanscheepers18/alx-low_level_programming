#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name of a person
 * @name: name of the person
 * @f: function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
