#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint- deletes head node of list and returns its data
 * Description: deletes head node and returns its data
 * Return: 0 or head's data
 * @head: head of list
 **/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	next_node = (*head)->next;

	free(*head);
	*head = next_node;

	return (data);
}
