#include "main.h"

/**
  *_islower - behaves like the isLower function
  *@c: the character to be checked
  *Description: checks for lowercase letters
  *Return: 1 if c is lowercase or 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
