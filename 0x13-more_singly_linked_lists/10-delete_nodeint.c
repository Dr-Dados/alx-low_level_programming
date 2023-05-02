#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to the head node of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *current;
unsigned int i;

if (*head == NULL)
return (-1);
if (index == 0)
{
current = *head;
*head = current->next;
free(current);
return (1);
}

prev = *head;
current = prev->next;

for (i = 1; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}

if (current == NULL)
return (-1);

prev->next = current->next;
free(current);

return (1);
}
