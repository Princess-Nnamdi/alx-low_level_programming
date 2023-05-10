#include "main.h"

/**
 * _sqrt_recursion- returns the natural square root of a number
 * Description: prints square root
 * Return: natural square root of a number
 * @n: input
 * @i: iterate number in _sqrt function
 **/
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt- calculates square root
 * Return: natural square root
 * Description: calculates square root
 * @n: number
 * @i: iterate number
 **/

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n < 0)
		return (-1);
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
