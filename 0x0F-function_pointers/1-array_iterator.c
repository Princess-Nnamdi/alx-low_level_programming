#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator- prints each item in an array
 * on a new line
 * Description: iterates over an array
 * @size: size of the array
 * @array: array of elements
 * @action: pointer to function
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
