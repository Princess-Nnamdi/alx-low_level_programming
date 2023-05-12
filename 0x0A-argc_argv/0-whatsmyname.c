#include <stdio.h>
#include "main.h"

/**
 * main- prints the name of the program
 * @argc: number of arguements
 * @argv: number of arguements
 * Return: 0 on success
 * Description: prints new name too without recompiling
 **/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
