#include <stdio.h>

/**
  *main - Entry point
  *Description: printing all lowercase letters excdpt q and e
  *Return: always 0
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	return (0);
}
