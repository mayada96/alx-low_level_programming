#include "lists.h"

/**
 * listint_len - number of elementson the list
 * @h: pointer to the list
 *
 * Return: number of elemnts on the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
