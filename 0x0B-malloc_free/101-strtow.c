#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 * Description: helper function for **strtow
 **/

int count_word(char *s)
{
	int c, flag = 0, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '\0')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}


/**
 * **strtow- splits a string into words
 * Description: splits a string into words
 * Return: a pointer, NULL if str == NULL or str == ""
 * NULL if function fails
 * @str: input
 **/

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, start, end, words, k = 0, len = 0, c = 0;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] == '\0' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				{
					*tmp++ = str[start++];
					*tmp = '\0';
					matrix[k] = tmp - c;
					k++;
					c = 0;
				}
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
