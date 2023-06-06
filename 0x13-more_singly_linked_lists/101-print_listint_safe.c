#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 * Description: prints a listint_t list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	int diff;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		diff = current - current->next;

		if (diff <= 0)
		{
			printf("Error: loop detected, unable to print the full list\n");
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
