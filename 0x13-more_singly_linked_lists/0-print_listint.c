#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t a = 0;

while (h)
{
printf("%d\n", h->n);
a++;
h = h->next;
}

return (a);
}
