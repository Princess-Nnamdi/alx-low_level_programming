#include "main.h"

/**
 * _isdigit- checks for numbers 0 through 9
 * Return:1 is c is a digit or 0 otherwise
 * Description: a program that checks for numbers
 * @c: the input being checked
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
