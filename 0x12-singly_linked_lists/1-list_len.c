#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len- returns number of elements in a list
 * Description: returns number of elements in a list
 * Return: number of elements in list
 * @h: pointer to first node
 **/

size_t list_len(const list_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next)
	{
		num++;
	}
	return (num);
}
