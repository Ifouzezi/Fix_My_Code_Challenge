#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @h: A pointer to the first element of a list
 * @idx: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t *saved_head;
	dlistint_t *current;
	unsigned int pos;

	if (*h == NULL)
	{
		return (-1);
	}
	saved_head = *h;
	pos = 0;
	while (pos < idx && *h != NULL)
	{
		*h = (*h)->next;
		pos++;
	}
	if (pos != idx)
	{
		*h = saved_head;
		return (-1);
	}
	if (0 == idx)
	{
		current = (*h)->next;
		free(*h);
		*h = current;
		if (current != NULL)
		{
			current->prev = NULL;
		}
	}
	else
	{
		(*h)->prev->next = (*h)->next;
		free(*h);
		if ((*h)->next)
			(*h)->next->prev = (*h)->prev;
		*h = saved_head;
	}
	return (1);
}
