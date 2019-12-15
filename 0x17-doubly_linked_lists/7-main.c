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
    dlistint_t *head;

    printf("\n\n");
    printf("FIRST TEST (tail insertion)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 8, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("SECOND TEST (empty list)\n");
    head = NULL;
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("THIRD TEST (middle)\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;

    printf("\n\n");
    printf("FOURTH TEST (another test)\n");
    head = NULL;
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 10, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;

    return (EXIT_SUCCESS);
}
