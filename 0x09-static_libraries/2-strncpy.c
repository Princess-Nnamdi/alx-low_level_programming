#include "main.h"

/**
 * *_strncpy- a function that copies a string
 * Return: a pointer to the resulting string dest
 * Description: a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_length = 0;

	while (src[i++])
	{
		src_length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_length; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
