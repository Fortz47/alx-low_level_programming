#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements to allocate memory for
 * @size: The size of each element in bytes
 *
 * Return: void pointer to memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *byte_ptr;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	byte_ptr = (unsigned int *)ptr;
	for (i = 0; i < nmemb; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
