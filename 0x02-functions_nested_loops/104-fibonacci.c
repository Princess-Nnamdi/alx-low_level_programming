#include <stdio.h>

/**
 * main - Entry Point
 * Return: always 0
 * Description:  finds and prints the first 98 Fibonacci numbers
 **/

int main(void)
{
	int i = 0;
	unsigned long long int a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%llu", next);

		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
