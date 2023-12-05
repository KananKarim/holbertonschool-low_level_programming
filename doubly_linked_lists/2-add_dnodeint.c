#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning.
 * @head: double pointer to the start of the list.
 * @n: integer to be included in the new node.
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (temp);
}
