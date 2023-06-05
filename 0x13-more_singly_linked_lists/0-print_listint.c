#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_intlist- prints all elements of a list
 * Description: prints all elements of a list
 * Return: number of nodes
 * @h: linked list
 **/

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
