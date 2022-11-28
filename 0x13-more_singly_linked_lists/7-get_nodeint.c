#include "lists.h"

/**
 * get_nodeint_at_index - print the value of a node on alist
 * @head:pointer to the first node on the list
 * @index: the index of the node, starting at 0
 *
 * Return: the value of anode
 * or a NULL on failer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
