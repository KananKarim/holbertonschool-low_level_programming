#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: pointer to the start of the list.
 * @index: index of the node, starting from 0.
 *
 * Return: the nth node of a dlistint_t
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
