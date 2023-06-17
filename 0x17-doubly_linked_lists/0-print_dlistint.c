#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint - function that prints elements of a linked list.
 * @h: Header of a linked list.
 *
 * @tmp: Temporary variable
 * Return: number of elements in a list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t size = 0;

	if (tmp->prev != NULL)
	{
		while (tmp !=NULL)
		{
			tmp = tmp->prev;
		}
	}

        while (tmp != NULL)
        {
                printf("%d\n", tmp->n);
                tmp = tmp->next;
                size++;
        }

	return (size);
}
