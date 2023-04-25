#include "main.h"

/**
 * print_sign - function name
 * Description: prints the sign of a number
 * @n: the number to be checked
 *Return: 1 if n is positive, 1 if n is negative or 0 otherwise
 **/

int print_sign(int n)

{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
