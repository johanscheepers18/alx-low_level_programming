#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to the head of a list
 * @n: value to be added
 * Return: retuns the new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *placement = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
	{
		return (NULL);
	}

	if (placement != NULL)
	{
		while (placement->next != NULL)
		{
			placement = placement->next;
		}

		placement->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
