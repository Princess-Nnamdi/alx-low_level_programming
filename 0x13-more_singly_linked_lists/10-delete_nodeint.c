#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index- deletes a node at specified index
 * Description: deletes a node at specified index
 * Return: -1 for failure and 1 for success
 * @head: head of list
 * @index: specified index
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		count++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
