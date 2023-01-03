#include <stdlib.h>
#include <lists.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node;
    listint_t *current;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->n = number;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    current = *head;
    while (current->next != NULL
