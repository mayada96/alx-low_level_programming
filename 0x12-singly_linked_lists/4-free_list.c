#include "lists.h"

/**
 * free_list - that frees a list
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t tmp;

	while (hear)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
