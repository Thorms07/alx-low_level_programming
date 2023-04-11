#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and initializes with specific char.
 * @size: size of array to be created
 * @c: char to assign the array with
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
