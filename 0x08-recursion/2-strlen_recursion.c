#include "main.h"

/**
 * _strlen_recursion- prints len of a string
 * Description: prints string length
 * Return: number of characters in string
 * @s: input
 **/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
