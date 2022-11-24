#include "lists.h"

/**
 * add_node_end - adding new node to the end of the list
 * @head: the head of the list
 * @str: the string of the new node
 *
 * Return:  address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *ptr, *last;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	ptr->str = dup;
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = ptr;
	}
	return (*head);
}
