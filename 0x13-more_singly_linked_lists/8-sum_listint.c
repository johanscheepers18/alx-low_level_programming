#include "lists.h"

/**
 * sum_listint - returns the sum of all data in list
 * @head: head of the list
 * Return: returns the sum of all data
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
