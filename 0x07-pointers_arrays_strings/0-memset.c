#include "main.h"

/**
 * *_memset- that fills memory with a constant byte
 * Return:  a pointer to the memory area s
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Description: fills memory with b
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
