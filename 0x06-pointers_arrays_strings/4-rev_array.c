#include "main.h"

/**
 * reverse_array- reverses the content of an array of integers
 * Description: reverses an array of integers
 * @a: array of integers
 * @n: number of elements in array
 **/

void reverse_array(int *a, int n)
{
	int reg, i;

	for (i = 0; i < n; i++)
	{
		n--;
		reg = a[i];
		a[i] = a[n];
		a[n] = reg;
	}
}
