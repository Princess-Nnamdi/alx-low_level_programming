#include "main.h"

/**
 * print_number- prints an integer
 * Description: prints an integer
 * @n: input
 **/

void print_number(int n)
{
	int i, j, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = n; i / 10 != 0; i /= 10)
	{
		divisor *= 10;
	}
	for (j = divisor; j != 0; j /= 10)
	{
		_putchar((n / j) % 10 + '0');
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
