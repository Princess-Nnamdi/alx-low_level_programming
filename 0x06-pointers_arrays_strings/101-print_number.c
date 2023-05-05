#include "main.h"

/**
 * print_number- prints an integer
 * Description: prints an integer
 * @n: input
 **/

void print_number(int n)
{
	unsigned int k, p, count;

	if (n < 0)
	{
		_putchar(45);
		k = n * -1;
	}
	else
	{
		k = n;
	}

	p = k;
	count = 1;

	while (p < 9)
	{
		p /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((k / count) % 10) + 48);
	}
}
