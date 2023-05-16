#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_strdup- returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * Return: pointer to new address or NULL
 * Description: newly allocated space
 * @str: input
 **/

char *_strdup(char *str)
{
	char *copy;
	unsigned int j = 0, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);
	while ((copy[j] = str[j]) != '\0')
		j++;
	return (copy);
}
