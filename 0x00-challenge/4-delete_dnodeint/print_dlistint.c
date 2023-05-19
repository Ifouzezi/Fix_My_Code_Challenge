#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list of integers
 *
 * @list: A pointer to the first element of a list
 *
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *list)
{
	size_t count;

	count = 0;
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
		count++;
	}
	return count;
}
