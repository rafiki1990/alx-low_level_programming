nclude "lists.h"
#include <stdlib.h>
/**
 *  * insert_nodeint_at_index - inserts a new node in a linked list,
 *   * at a given position
 *    * @head: pointer to the first node in the list
 *     * @idx: index where the new node is added
 *      * @n: data to insert in the new node
 *       *
 *        * Return: pointer to the new node, or NULL
 *         */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *d;
listint_t *t = *head;

d = malloc(sizeof(listint_t));
if (!d || !head)
return (NULL);

d->n = n;
d->next = NULL;

if (idx == 0)
{
d->next = *head;
*head = d;
return (d);
}

for (j = 0; t && j < idx; j++)
{
if (j == idx - 1)
{
d->next = t->next;
t->next = d;
return (d);
}
else		
t = t->next;
}

return (NULL);
}
