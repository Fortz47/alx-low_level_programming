#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of byte to copy
 *
 * Return: pointer to dest
 */

void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;

	char *dest_ptr = (char *) dest;
	const char *src_ptr = (const char *) src;

	for (i = 0; i < n; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory block,
 * or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	copy_size = (old_size < new_size) ? old_size : new_size;
	_memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return (new_ptr);
}
