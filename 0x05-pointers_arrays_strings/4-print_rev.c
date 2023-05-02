#include "main.h"

/**
 * print_rev- prints a string in reverse to stdout
 * Description: prints a string in reverse followed by a newline
 * @s: the string to be printed
 **/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
