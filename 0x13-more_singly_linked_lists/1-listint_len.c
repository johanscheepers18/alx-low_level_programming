#include "lists.h"

/**
 * listint_len - prints the length of the list
 * @h: list to be used
 * Return: returns the length
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *x = h;
	size_t len = 0;

	while (x != NULL)
	{
		len++;
		x = x->next;
	}

	return (len);
}
