#include "main.h"

/**
 * main- determines if a number is negative or positive
 * Return: 0 on success
 * 0 is the number being checked
 **/

void positive_or_negative(int i)
{
	if (i < 0)
	{
	printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
	return;
}
