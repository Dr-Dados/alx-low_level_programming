#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: struct list
 * Return: list_len
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t l = 0;
int i = 0;
for (i = 0; h; i++)
{
l++;
h = h->next;
}
return (l);
}
