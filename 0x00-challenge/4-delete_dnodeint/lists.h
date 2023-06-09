#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @data: integer data
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: Doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int data;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *list);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int data);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
void free_dlistint(dlistint_t *list);

#endif
