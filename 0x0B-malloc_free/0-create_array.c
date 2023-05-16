#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *create_array- creates an array of chars, and initializes
 * it with a specific char
 * Return: NULL if size = 0, pointer to array,
 * NULL if it fails
 * Description: creates array of chars
 * @size: number of bytes
 * @c: initialized character
 **/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
