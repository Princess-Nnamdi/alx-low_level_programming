#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *malloc_checked- allocates memory using malloc
 * Description: allocates memory using malloc
 * Return: pointer to allocated memory
 * @b: number of bytes to allocate
 **/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
