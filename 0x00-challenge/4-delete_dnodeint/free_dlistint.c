#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 *
 * @list: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t *list)
{
	dlistint_t *current_node;

	while (list)
	{
		current_node = list;
		list = list->next;
		free(current_node);
	}
}
