#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct lists - the singly linked lists
 * @str: string to be used
 * @len: length of the string
 * @next: the next node
 */
typedef struct lists
{
	char *str;
	unsigned int len;
	struct lists *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
