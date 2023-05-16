#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *argstostr- concatenates all the arguments of my program
 * Description: concatenates all the arguments of my program
 * Return:a pointer or  NULL if ac == 0 or av == NULL
 * or NULL if it fails
 * @ac: number of arguements
 * @av: array of arguements
 **/

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
