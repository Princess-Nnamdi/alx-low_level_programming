#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *insert_nodeint_at_index- insert a node at specified position
 * Description: adds new node at specified position
 * Return: address of new node or NULL if failed
 * or NULL if addition of new node is not possible
 * @head: head of list
 * @idx: index to insert new node
 * @n: data value of new node
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		current = *head;
		for (; count < idx - 1 && current->next != NULL; count++)
			current = current->next;

		if (count < idx - 1)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
