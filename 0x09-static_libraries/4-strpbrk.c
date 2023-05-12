#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk-  searches a string for any of a set of bytes
 * Description:  searches a string for any of a set of bytes.
 * Return:  a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 * @s: input
 * @accept: input
 **/

char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}
	return (NULL);
}
