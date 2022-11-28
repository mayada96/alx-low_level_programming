#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the first node on a list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head->next);
		free(head);
		head = head->next;
	}
}
