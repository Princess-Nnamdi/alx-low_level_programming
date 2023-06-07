#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of node
 * Description: reverses a linked list
 * Return: pointer to first node
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next  = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
