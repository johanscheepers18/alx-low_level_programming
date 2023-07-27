#include "lists.h"

/**
 * add_node - adds a new node
 * @head: the start of the node
 * @str: the string that should be added
 * Return: returns the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *src;
	int i;
	list_t *new_node;

	src = strdup(str);
	new_node = malloc(sizeof(list_t));

	if (src == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; str[i] ; i++)
	{
		;
	}

	new_node->str = src;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
