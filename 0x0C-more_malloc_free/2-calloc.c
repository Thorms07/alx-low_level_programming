#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array and set it to zero
 * @nmemb: number of elements to allocate
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* use memset to set memory to zero*/
	memset(ptr, 0, total_size);

	return (ptr);
}
