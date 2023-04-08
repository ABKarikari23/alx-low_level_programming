#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Function that checks wether a machine little or big
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *k = (char *)&a;

	if (*k)
		return (1);
	else
		return (0);
}
