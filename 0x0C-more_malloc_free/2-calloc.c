#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_memset- fills memory with a constant byte
 * Description: fills memory with a constant byte
 * Return: pointer to memory area s
 * @b: char to copy
 * @n: number of times to copy
 * @s: memory area to be filled
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc- allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: a pointer to allocated memory
 * Description: allocates memory for an array, using malloc
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
