#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: pointer to the first node of the list
 *@n: data to insert
 *
 *Return: pointer to the new node, or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n,
newNode->next = *head;
*head = newNode;
return (newNode);
}
