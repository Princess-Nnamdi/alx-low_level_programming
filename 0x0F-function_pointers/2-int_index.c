#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index- searches for an integer
 * Description: seraches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: function pointer
 * Return: 0 if size <= 0
 * -1 if no element matches index of first element on success
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
