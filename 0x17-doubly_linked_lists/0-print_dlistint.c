#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head of a doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *p = h;
size_t n = 0;
while (p && p->prev)
p = p->prev;
while (p)
{
printf("%d\n", p->n);
n++;
p = p->next;
}
return (n);
}
