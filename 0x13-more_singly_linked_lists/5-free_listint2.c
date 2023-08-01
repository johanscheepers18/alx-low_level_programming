#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer of the head
 */
void free_listint2(listint_t **head)
{
	listint_t **copy = head;
	listint_t *placement;

	if (copy != NULL)
	{
		while (head != NULL)
		{
			placement = *head;
			free(placement);
			*head = *head->next;
		}

		*copy = NULL;
	}
}
