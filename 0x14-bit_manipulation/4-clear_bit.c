#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index
 * Description: sets the value of a bit to 0 at a given index
 * Return: 1 on success or -1 if error occurred
 * @n: number to change
 * @index: specified index
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
