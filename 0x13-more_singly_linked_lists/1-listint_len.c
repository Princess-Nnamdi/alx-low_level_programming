#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len- returns number of elements in a list
 * Description: returns number of elements in a list
 * Return: number of elements in list
 * @h: pointer to first node
 **/

size_t listint_len(const listint_t *h)
{
	size_t number;

	for (number = 0; h != NULL; h = h->next)
		number++;

	return (number);
}
