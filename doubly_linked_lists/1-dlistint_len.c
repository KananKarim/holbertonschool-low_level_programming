#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer to the start of the list.
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
