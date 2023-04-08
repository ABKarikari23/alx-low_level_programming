#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: Pointer to the number to change
 * @index: bit set to 1
 * Return: 1 for success, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
