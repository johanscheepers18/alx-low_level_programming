#include "lists.h"

int pop_listint(listint_t **head)
{
	int i;
	listint_t *x;

	if (*head == NULL)
	{
		return (0);
	}

	x = *head;
	i = x->n;
	free(x);

	*head = (*head)->next;

	return (i);
}
