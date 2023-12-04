#include "main.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: If str is NULL, print [0] (nil).
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
