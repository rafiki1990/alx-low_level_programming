#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *d = head;
while (d)
{
s += d->n;
d = d->next;
}

return (s);
}
