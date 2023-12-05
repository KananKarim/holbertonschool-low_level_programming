#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end.
 * @head: double pointer to the start of the list.
 * @n: integer to be included in the new node.
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{

		curr = *head;

		while (curr->next != NULL)
			curr = curr->next;

		curr->next = new;
		new->prev = curr;
	}

	return (new);
}
