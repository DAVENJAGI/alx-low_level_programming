#include "lists.h"

/**
 * dlistint_len - function to print the number of elements in a node
 * @tmp: temporary variable
 * @h: Head node.
 *
 * Return: number of elements in a list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t size = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}

