#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *array_range- creates an array of integers
 * Description: creates an array of integers
 * Return: pointer to new array
 * if min > max return NULL
 * if malloc fails, return NULL
 * @min: minimum value
 * @max: maximum value
 **/

int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ar[i] = min;
	return (ar);
}
