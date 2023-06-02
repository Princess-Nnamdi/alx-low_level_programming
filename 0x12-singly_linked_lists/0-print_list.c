#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list- prints all elements in a list
 * Description: prints all elements in a list
 * Return: number of nodes
 * @h: pointer to first node
 **/

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (count);
}
