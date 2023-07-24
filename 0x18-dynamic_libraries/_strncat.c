#include "main.h"

/**
 * *_strncat- concatenates two strings
 * Description: concatenates two strings
 * Return: a pointer to the resulting string dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be appended to dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i = 0;

	while (dest[i++])
	{
		length++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
