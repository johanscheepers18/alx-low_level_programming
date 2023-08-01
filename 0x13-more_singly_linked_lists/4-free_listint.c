#include "lists.h"

/**
 * free_listint - free a list
 * @head- pointer to the head of a list
 */
void free_listint(listint_t *head)
{
	listint_t *copy;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}
