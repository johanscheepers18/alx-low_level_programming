#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index
 * @head: head of the list
 * @index: index value of the node to be returned
 * Return: returns the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < index && head != NULL ; i++)
	{
		head = head->next;
	}

	return (head);
}
