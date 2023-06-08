#include "main.h"
#include <stddef.h>

/**
 * print_binary- prints binary equivalent of a number
 * Description: converts a number to base two
 * @n: inputed number
 **/

void print_binary(unsigned long int n)
{
	int j, iter = 0;
	unsigned long int temp;

	for (j = 63; j >= 0; j--)
	{
		temp = n >> j;
		if (temp & 1)
		{
			_putchar('1');
			iter++;
		}
		else if (iter)
			_putchar('0');
	}
	if (!iter)
		_putchar('0');
}
