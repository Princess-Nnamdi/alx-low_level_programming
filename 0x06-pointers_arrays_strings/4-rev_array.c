#include "main.h"

/**
 * rev_array- reverses the content of an array of integers
 * Description: reverses an array of integers
 * @a: array of integers
 * @n: number of elements in array
 **/

void reverse_array(int *a, int n)
{
	int reg, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		reg = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = reg;
	}
}
