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
	int subt;
	size_t size = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		subt = *h - (*h)->next;
		if (subt > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
