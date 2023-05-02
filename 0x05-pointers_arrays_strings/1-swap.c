#include "main.h"

/**
 * swap_int- a function that swaps the values of two integers
 * Return: 0 on success
 * @a: first integer input
 * @b: second integer input
 * Description: swaps the values of two integers
 **/

void swap_int(int *a, int *b)
{
	int r;
	int q;

	r = *a;
	q = *b;
	*b = r;
	*a = q;
}
