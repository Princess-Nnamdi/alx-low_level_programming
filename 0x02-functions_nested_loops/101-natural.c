#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 * Return: always 0
 * Description: a program that prints a range of numbers
 **/

void main(void)

{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z <= i;
	}
	i++;
	}
	printf("%d\n", z);
}
