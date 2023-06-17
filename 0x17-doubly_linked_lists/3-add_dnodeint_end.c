#include "lists.h"
/**
 * *add_dnodeint_end - Function to add a node at the end of list.
 * @tmp: temporary variable, which reps a new node.
 * @head: header pointer.
 * @last_node: Last node in the list
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, last_node;

	/*First we allocate memory to the new node*/

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
	
		return (NULL);
	/*Then set values for the new node*/

	tmp->n = n;
	tmp->prev = NULL;
	
	last_node = *head;

	if(*head == NULL)
	{
		tmp->next = *head;
		*head = tmp;
	}
	else
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = tmp;
	}
	tmp->prev =tmp;
	
	return (*head);
}
