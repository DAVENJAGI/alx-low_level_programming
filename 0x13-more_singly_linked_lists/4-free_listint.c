#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *h, *next;

	h = head;

	while (h != NULL)
	{
		next = h->next;
		free(h);
		h = next;
	}
}
