#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a list
 * @head: the first node on alist
 * @n: the value of the new node
 *
 * Return: the pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}
	return (*head);
}
