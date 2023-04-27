#include "main.h"

/**
 * print_line- this program prints line
 * Return: always 0
 * @n: number of times
 * Description: printing a line
 **/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
