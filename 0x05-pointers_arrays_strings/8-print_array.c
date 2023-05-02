#include "main.h"
#include <stdio.h>

/**
 * print_array- prints n elements of an array of integers then a new line
 * Description: prints n elements of an array of integers
 * @a: first input
 * @n: second input
 **/

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
