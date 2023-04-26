#include <stdio.h>

/**
 * main - Entry Point
 * Return: always 0
 * Description:  finds and prints the first 98 Fibonacci numbers
 **/

int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 98)
	{

		printf("%lu", next);
		if (i < 97)
			printf(", ");
		i++;

		next = a + b;
		a = b;
		b = next;
	}
	putchar('\n');
	return (0);
}
