#include "lists.h"

/**
 * *add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the linked list.
 * @n: Integer value to be added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
