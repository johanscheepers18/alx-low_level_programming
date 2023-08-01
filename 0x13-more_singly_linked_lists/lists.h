#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - the singly linked list
 * @n: int to be used
 * @next: the following node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif
