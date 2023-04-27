#include "main.h"

/**
 * print_most_numbers- prints 0 to 9 without 2 and 4
 * Description: prints some numbers
 **/

void print_most_numbers(void)
{
	int c = 0, d;

	while (c < 10)
	{
		d = 0;
		while (d < 10)
		{
			if (d == 2 || d == 4)
				continue;
		_putchar(d);
		d++;
		}
	_putchar('\n');
	c++;
	}
}
