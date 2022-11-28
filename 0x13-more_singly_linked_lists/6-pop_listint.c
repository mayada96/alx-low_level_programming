#include "lists.h"

/**
 * pop_listint - delete the first node
 * @head: pointer to the first node
 *
 * Return: the valude of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
