#include "main.h"

/**
 * *_strcpy- copies the string pointed to by src
 * Description: copies the string pointed to by src
 * Return: string
 * @dest: destination
 * @src: source
 **/

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
