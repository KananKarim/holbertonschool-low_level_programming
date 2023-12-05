#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the start of the list.
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
