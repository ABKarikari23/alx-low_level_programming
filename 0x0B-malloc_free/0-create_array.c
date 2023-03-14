#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of and initialize it with a specific value
 * @size: The desired size of the array
 * @c: The value with which the array should be initalized
 *
 * Return: NULL if size is 0 or memory allocation fails,
 * otherwise 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
