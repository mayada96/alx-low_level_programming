#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the first node on a list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
