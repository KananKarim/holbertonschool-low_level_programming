#include "lists.h"

/**
 * add_node_end - Adds a new node.
 * @head: A pointer to the address
 * @str: The string to be added to the list_t list.
 * Return:the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *new_str;
	size_t len = strlen(str);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
