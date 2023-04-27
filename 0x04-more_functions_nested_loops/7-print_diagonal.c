#include "main.h"

/**
 * print_diagonal- prints diagonally
 * Return: always 0
 * Description: a program that prints diagonally
 * @n: number of times
 **/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
