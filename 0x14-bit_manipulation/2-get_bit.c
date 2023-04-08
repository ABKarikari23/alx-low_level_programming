#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit of an index in a decimal number
 * @n: Search number
 * @index: index
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n = n >> index;

	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
	return (0);
	}

}
