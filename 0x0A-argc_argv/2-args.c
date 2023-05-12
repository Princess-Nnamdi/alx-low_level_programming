#include <stdio.h>
#include "main.h"

/**
 * main- prints all arguements received
 * Description: prints all arguements
 * Return: 0 on success
 * @argc: number of arguements
 * @argv: array of arguements
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
