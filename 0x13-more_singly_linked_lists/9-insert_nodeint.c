#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the first node of the list
 * @idx: index of the position where the new node should be inserted
 * @n: value of the new node to be inserted
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int i = 0;

if (head == NULL)
return (NULL);
/* create new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* special case: insert at the beginning */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

/* traverse the list to find the position */
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

    /* check if position was found */
if (temp == NULL)
{
free(new_node);
return (NULL);
}

    /* insert the new node */
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
