#include <stdio.h>

/**
 * prior_to_main- prints a message before
 * the main function executes
 * Description: a function that prints before main
 **/

void __attribute__((constructor)) prior_to_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
