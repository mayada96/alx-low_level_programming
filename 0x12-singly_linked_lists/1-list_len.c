#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: pointer to the struct
 *
 * Return: the number of elements on the list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str != NULL)
			n++;
		h = h->next;
	}
	return (n);
}
