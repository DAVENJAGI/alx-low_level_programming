#include "lists.h"
#include <stdio.h>

/**
 * print_listint -function that prints all the elements of a listint_t list.
 * @h: pointer to head of the list_t list.
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t U = 0;
	
	while (h)
	{
		U++;

		printf("%d\n", h->n);
		
		h = h->next;
	}
	return (U);
}
