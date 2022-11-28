#include "lists.h"

/**
 * add_nodeint - add node to the begining
 * @head: first node on the list
 * @n: the value of the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
