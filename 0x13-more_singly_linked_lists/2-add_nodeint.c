#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *add_nodeint- adds a new node at the beginning of a lsit
 * Description: adds new node at beginning of list
 * Return: address of new node OR NULL
 * @head: pointer to head node
 * @n: new node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	if (head == NULL)
		return (NULL);

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
