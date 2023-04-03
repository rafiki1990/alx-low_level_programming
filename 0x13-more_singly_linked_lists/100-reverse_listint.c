#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *g = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = g;
g = *head;
*head = next;
}

*head = g;

return (*head);
}
