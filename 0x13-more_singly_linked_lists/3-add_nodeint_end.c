#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * *add_nodeint_end- adds new node to end of a list
 * Description: adds new node to end of list
 * Return: address of new element or NULL if failed
 * @head: head of list
 * @n: new node
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail, *current;

	if (head == NULL)
		return (NULL);

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_tail;

	return (new_tail);
}
