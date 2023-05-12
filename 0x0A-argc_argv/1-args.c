#include <stdio.h>
#include "main.h"

/**
 * main- prints number of arguements passed
 * Description: prints number or arguements
 * Return: 0 on success
 * @argv:array of arguements
 * @argc: number of arguements
 **/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
