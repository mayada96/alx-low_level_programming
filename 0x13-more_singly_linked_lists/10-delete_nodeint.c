#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: pointer to the first node
 * @index: index of the node that should be deleted.
 *
 * Return: 1 on success, -1 on failer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *cp = *head;

	if (cp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}
	for (i = 0 ; i < (index - 1) ; i++)
	{
		if (cp->next == NULL)
		{
			return (-1);
		}
		cp = cp->next;
	}
	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);
	return (1);
}
