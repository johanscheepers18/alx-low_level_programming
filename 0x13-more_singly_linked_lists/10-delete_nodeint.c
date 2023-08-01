#include "lists.h"

/**
 * delete_nodeint_at_index - delete node from list
 * @head: pointer of the head
 * @index: index of the node that should be deleted
 * Return: returns 1 on success else returns -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x, *y;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		x = *head;
		*head = (*head)->next;
		free(x);

		return (1);
	}

	x = *head;

	for (i = 0 ; i != index - 1 && x->next != NULL ; i++)
	{
		x = x->next;
	}

	if (i == index - 1 && x->next != NULL)
	{
		y = x->next;
		x->next = y->next;
		free(y);

		return (1);
	}

	return (-1);
}
