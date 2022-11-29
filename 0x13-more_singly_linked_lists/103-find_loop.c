#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to first node on a list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find, *node;

	if (head == NULL || head->next == NULL)
		return (NULL);
	find = head->next;
	node = (head->next)->next;
	while (node)
	{
		if (find == node)
		{
			find = head;
			while (find != node)
			{
				find = find->next;
				node = node->next;
			}
			return (find);
		}
		find = find->next;
		node = (node->next)->next;
	}
	return (NULL);
}
