#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the first node on a list
 * @idx: the index of the list where the new node should be added.
 * @n: the valude of the new node.
 *
 * Return:  the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *cp = *head;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = cp;
		*head = node;
		return (node);
	}
	for (i = 0 ; i < (idx - 1) ; i++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);
		cp = cp->next;
	}
	node->next = cp->next;
	cp->next = node;
	return (node);
}
