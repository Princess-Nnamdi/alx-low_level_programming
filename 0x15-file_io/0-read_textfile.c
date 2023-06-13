#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile- reads a text file and prints it
 * to the POSIX standard output
 * Description: reads etxt files and prints them
 * Return: number of letters read and printed
 * OR 0 if file cannot be read, if filename is NULL
 * or if write fails
 * @filename: pointer to filename to be read
 * @letters: number of letters
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	ssize_t files;
	ssize_t writes;
	ssize_t reads;

	files = open(filename, O_RDONLY);
	if (files == -1 || filename == NULL)
		return (0);
	temp = malloc(sizeof(char) * letters);
	reads = read(files, temp, letters);
	writes = write(STDOUT_FILENO, temp, reads);

	free(temp);
	close(files);
	return (writes);
}
