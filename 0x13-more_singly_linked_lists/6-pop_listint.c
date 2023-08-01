#include "lists.h"

/**
 * pop_listint - removes a node from the list
 * @head: pointer to the head of the list
 * Returns: the head node value
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *x;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	x = *head;
	i = x->n;
	*head = (*head)->next;
	free(x);

	return (i);
}
