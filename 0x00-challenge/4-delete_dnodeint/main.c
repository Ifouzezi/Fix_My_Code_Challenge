#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *list;

    list = NULL;
    add_dnodeint_end(&list, 0);
    add_dnodeint_end(&list, 1);
    add_dnodeint_end(&list, 2);
    add_dnodeint_end(&list, 3);
    add_dnodeint_end(&list, 4);
    add_dnodeint_end(&list, 98);
    add_dnodeint_end(&list, 402);
    add_dnodeint_end(&list, 1024);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 5);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    print_dlistint(list);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&list, 0);
    print_dlistint(list);
    free_dlistint(list);
    return (0);
}
