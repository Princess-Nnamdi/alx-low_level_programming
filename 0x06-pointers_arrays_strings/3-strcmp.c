#include "main.h"

/**
 * *_strcmp- a function that compares two strings
 * Return: 0 on success
 * Description: a function that compares two strings
 * @s1: first string
 * @s2: second string
 **/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (s1 == s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
