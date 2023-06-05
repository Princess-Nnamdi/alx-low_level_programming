#include "lists.h"
#include <stddef.h>

/**
 * *get_nodeint_at_index- returns nth node of list
 * Description: returns nth node of list
 * Return: nth node or NULL if node doesn't exist
 * @head: head of list
 * @index: index of node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
