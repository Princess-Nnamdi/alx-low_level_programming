#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node- adds a node to the beginning of a list
 * Description: adds node to beginning of list
 * Return: address of new node or NULL if it fails
 * @head: pointer to head node
 * @str: new node
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->len = 0;
	while (str[new_head->len])
		new_head->len++;
	new_head->next = *head;
	*head = new_head;


	return (new_head);
}
