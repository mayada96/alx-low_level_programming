#include "lists.h"

/**
 * sum_listint - calculate the sume of the nodes of a list
 * @head: pointer to yhe first node on a list
 *
 * Return: the sum of the values of the nodes
 * or 0 on list is null
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
