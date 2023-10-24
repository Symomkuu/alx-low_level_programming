#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num_nodes = 0;
    const listint_t *current = head;
    const listint_t *check;

    while (current != NULL)
    {
        num_nodes++;
        check = head;
        while (check != current)
        {
            if (check == current->next)
            {
                printf("[%p] %d\n", (void *)current, current->n);
                return (num_nodes);
            }
            check = check->next;
        }
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
    }
    return (num_nodes);
}
