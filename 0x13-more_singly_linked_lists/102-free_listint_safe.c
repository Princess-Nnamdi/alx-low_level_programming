#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe- frees a list with a loop
 * Description: frees list with a loop
 * Return:size of what was freed
 * @h: head of list
 **/

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t size = 0;

	while (*h != NULL && (*h)->next > *h)
	{
		current = *h;
		*h = (*h)->next;
		size++;
		free(current);
	}

	if (*h != NULL)
	{
		size++;
		free(*h);
		*h = NULL;
	}
	return (size);
}
