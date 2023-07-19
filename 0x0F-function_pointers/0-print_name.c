#include "function_pointers.h"

/**
 * print_name - prints the name of a person
 * @name: name of the person
 * @f: function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_uppercase)

	{
		print_name_uppercase(name);
	}

	else
	{
		print_name_as_is(name);
	}
}
