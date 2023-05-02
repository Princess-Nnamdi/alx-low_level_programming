#include "main.h"

/**
 * puts2- prints every other character starting with the first one
 * @str: input
 * Description: prints every other character in a string
 **/

void puts2(char *str)
{
	int i = 0;

	for (;  str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
