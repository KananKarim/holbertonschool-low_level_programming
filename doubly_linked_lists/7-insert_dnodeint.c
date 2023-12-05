#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at a given position.
 * @h: double pointer to the start of the list.
 * @idx: index of the list where the new node added.
 * @n: integer to be included in the new node.
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	size_t i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	else if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}

	current->next = new_node;

	return (new_node);
}
