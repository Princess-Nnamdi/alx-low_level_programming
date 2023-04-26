#include <stdio.h>

/**
 * main - Entry Point
 * Return: always 0
 * Description:  finds and prints the first 98 Fibonacci numbers
 **/

int main(void)
{
	int a = 0, b = 1, c, i;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 100; i++)
	{
	c = a + b;
	printf("%d", c);
	if (i != 100)
	{
		printf(", ");
	}
	a = b;
	b = c;
	}
	printf("\n");
	return (0);
}
