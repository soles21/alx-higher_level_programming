#include <stdlib.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number) {
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL;
    }
    new_node->n = number;

    listint_t *curr = *head;
    listint_t *prev = NULL;
    while (curr != NULL && curr->n < number) {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL) {
        new_node->next = *head;
        *head = new_node;
    } else {
        new_node->next = curr;
        prev->next = new_node;
    }

    return new_node;
}
