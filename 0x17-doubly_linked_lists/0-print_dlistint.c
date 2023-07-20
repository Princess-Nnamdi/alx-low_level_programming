#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint- prints all elemernts in dlistint_t list
 * @h: pointer to head of link
 * Retrun: number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev)
		h = h->prev;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
