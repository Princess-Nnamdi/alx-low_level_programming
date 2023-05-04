#include "main.h"

/**
 * *string_toupper- changes all lowercase to uppercase
 * Description: changes lowercase to uppercase
 * Return: the uppercase string
 * @s: the string
 **/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
		i++;
	}
	return (s);
}
