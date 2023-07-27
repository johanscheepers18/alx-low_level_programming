#include "lists.h"

/**
 * add_node_end - adds new node to the end of list
 * @head: head of the list
 * @str: string to be added
 * Return: returns the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *src;
	int i;
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	src = strdup(str);
	if (src == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0 ; str[i] ; i++)
		;

	new_node->str = src;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
