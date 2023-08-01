#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: list to be used
 * Return: returns the amount of items
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *x = h;
	size_t amount = 0;

	while (x != NULL)
	{
		printf("%d\n", x->n);
		amount++;
		x = x->next;
	}

	return (amount);
}
