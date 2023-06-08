#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint- converts binary numbers to decimal
 * Description- converts binary to unsigned int
 * Return: decimal number or 0
 * @b: binary input
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = (dec << 1) + (*b - '0');
		b++;
	}
	return (dec);
}
