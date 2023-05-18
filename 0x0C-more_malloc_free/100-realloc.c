#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_realloc- reallocates a memory block using malloc and free
 * Description: reallocates a memory block using malloc and free
 * Return: ptr
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 * @ptr: pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: he new size, in bytes of the new memory block
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (old_size == new_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
