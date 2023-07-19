#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that receives the operator
 * @s: operator string
 * Return: returns the operator that should be used in op_functions,
 *	else returns NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 10)
	{
		if (*s == ops->op[i])
		{
			return (ops[i / 2].f);
		}

		i++;
	}

	return (NULL);
}
