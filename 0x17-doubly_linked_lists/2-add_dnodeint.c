#include "lists.h"
/**
 * *add_dnodeint - A function to add a node at the beginning of list.
 * @head: first node of  list
 * @temp: temporary variable.
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;
	return (*head);
}
