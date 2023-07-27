#include "lists.h"

/**
 * print_list - prints all the elements of list
 * @h: list to be used
 * Return: returns the amount nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *n = h;
	size_t count = 0;

	while (n != NULL)
	{
		if (n->str != NULL)
		{
			printf("[%d] %s\n", n->len, n->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		count++;
		n = n->next;
	}

	return (count);
}
