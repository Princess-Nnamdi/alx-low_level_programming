#include "main.h"

/**
 * _pow_recursion- raises a number to another
 * Description: performs exponential calculation
 * Return: result of calculation
 * @x: number
 * @y: power
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
