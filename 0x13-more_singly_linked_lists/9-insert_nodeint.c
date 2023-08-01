#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at certain point in list
 * @head: pointer to the head
 * @idx: where to enter the value
 * @n: value to be enterd
 * Return: returns new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *x;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	x = *head;
	for (i = 0 ; i != idx - 1 && x != NULL ; i++)
	{
		x = x->next;
	}

	if (i == idx - 1 && x != NULL)
	{
		new_node->next = x->next;
		x->next = new_node;

		return (new_node);
	}
	return (NULL);
}
