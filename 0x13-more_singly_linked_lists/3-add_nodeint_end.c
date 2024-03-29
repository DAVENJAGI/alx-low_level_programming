#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint_end -function that adds a new node
 * at the end of a listint_t list.
 * @head: Pointer to first node.
 * @n: node to add at the end.
 *
 * Return:the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *u = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (u->next)
		u = u->next;
	u->next = new;
	return (new);
}
