#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the list to be printed
 *
 * Return: number of the elements on the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
