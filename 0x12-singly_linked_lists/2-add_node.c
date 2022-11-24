#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the pointer of the new node
 * @str: aduplicte of the new string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int len = 0;
	char *dup;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
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
	ptr->str = strdup(str);
	ptr->next = *head;
	ptr->len = len;
	*head = ptr;
	return (ptr);
}
