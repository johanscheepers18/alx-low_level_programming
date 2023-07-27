#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: list to be used
 * Return: returns the amount of elemets
 */
size_t list_len(const list_t *h)
{
	const list_t *n = h;
	size_t count = 0;

	while (n != NULL)
	{
		count++;
		n = n->next;
	}

	return (count);
}
