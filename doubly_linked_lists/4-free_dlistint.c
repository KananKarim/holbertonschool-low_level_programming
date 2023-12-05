#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the start of the list.
 *
 * Return: void
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
