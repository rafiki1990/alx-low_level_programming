#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t = *head;
listint_t *g = NULL;
unsigned int j = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(t);
return (1);
}

while (j < index - 1)
{
if (!t || !(t->next))
return (-1);
t = t->next;
j++;
}

g = t->next;
t->next = g->next;
free(g);

return (1);
}
