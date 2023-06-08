#include "main.h"

/**
 * set_bit- sets the value of a bit to 1 at a given index
 * Description: sets value of a bit at given index to 1
 * Return: 1 on success or -1 on failure
 * @index: specified index
 * @n: number to change
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
