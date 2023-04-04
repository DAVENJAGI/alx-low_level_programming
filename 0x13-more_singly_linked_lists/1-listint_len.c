#include "lists.h"
#include <stdio.h>

/**
 * listint_len -Returns number of elements in a linked listint_t list.
 *
 * @h: parameters with the list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t u = 0;

	while (h)
	{
		u++;

		h = h->next;
	}
	return (u);
}
