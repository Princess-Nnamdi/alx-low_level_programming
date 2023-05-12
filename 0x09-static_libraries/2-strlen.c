#include "main.h"

/**
 * _strlen- prints the length of a string
 * Return: len
 * Description: works like strlen function
 * @s: string to be worked on
 **/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
