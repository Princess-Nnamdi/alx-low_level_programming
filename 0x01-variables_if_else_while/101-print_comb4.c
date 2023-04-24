#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - Entry point
  *Description: Three digit combinations
  *Return: always 0
*/

int main(void)
{
	int n, m, p;

	for (n = '1'; n = '9'; n++)
	{
	for (m = n + 1; m <= '9'; m++)
	{
	for (p = m + 1; p <= '9'; p++)
	{
	if ((n != m) != p)
	{
	putchar(n);
	putchar(m);
	putchar(p);
	if (n == '7' && m == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
