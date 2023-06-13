#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *create_buffer(char *file);
void closes_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * Description: allocates 1024 bytes for a buffer.
 * Return: pointer to newly allocated buffer
 * @file: The name of the file buffer is storing chars for
 **/

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", file);
		exit(99);
	}
	return (buffer);
}


/**
 * closes_file- closes file descriptors
 * Description: closes file descriptors
 * @fd: file descriptor to be closed
 **/

void closes_file(int fd)
{
	int car;

	car =  close(fd);
	if (car == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main- copies the contents of a file to another
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 on success
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 **/

int main(int argc, char *argv[])
{
	int from, to, reads, writes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	reads = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || reads == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writes = write(to, buffer, reads);
		if (to == -1 || writes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		reads = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (reads > 0);

	free(buffer);
	closes_file(from);
	closes_file(to);

	return (0);
}
