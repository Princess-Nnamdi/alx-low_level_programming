#include "main.h"

/**
 * _isupper- find uppercase letters
 * Return: 1 if c is uppercase and 0 otherwise
 * Description: a program that finds uppercase
 * @c: the letter being checked
 **/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
