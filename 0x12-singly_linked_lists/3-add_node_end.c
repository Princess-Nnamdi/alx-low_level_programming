#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end- adds a new node to the end of list
 * Description- addsd new node to end of list
 * Return: address of new node or NULL if failed
 * @head: head of list
 * @str: new node
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail, *current;

	new_tail = malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->str = strdup(str);
	if (new_tail == NULL)
	{
		free(new_tail);
		return (NULL);
	}
	new_tail->len = 0;
	while (str[new_tail->len])
		new_tail->len++;
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
