#include "lists.h"

/**
 * list_len - Returns the number of elements.
 * @h: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
