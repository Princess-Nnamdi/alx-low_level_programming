#include "main.h"

/**
 * _abs - function name
 * Description: computes absolute value of an integer
 * Return: absolute value of number or 0
 * @n: integer to be computed
 **/

int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
