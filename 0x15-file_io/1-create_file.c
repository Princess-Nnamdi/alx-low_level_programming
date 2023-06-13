#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_file- this function creates a file
 * Description: creates a file
 * Return: 1 on success or -1 on failure
 * @filename: pointer to name of file to be created
 * @text_content: a pointer to a string to write to the file
 **/

int create_file(const char *filename, char *text_content)
{
	int files, writes, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	files = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writes = write(files, text_content, len);
	if (files == -1 || writes == -1)
		return (-1);

	close(files);
	return (1);
}
