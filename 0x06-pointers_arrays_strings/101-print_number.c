#include "main.h"

/**
 * print_number- prints an integer
 * Description: prints an integer
 * @n: input
 **/

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		_putchar(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
