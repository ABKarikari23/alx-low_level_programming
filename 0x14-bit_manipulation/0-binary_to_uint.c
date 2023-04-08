#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that convert a binary number to an unsigned int
 * @b: String containing the binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int k, a = 0;

	if (b == NULL)
		return (0);
	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		a++;
	}
	number = 0;
	for (k = 0; b[k] != '\0'; k++)
	{
		number = number << 1;

		if (b[k] == '1')
			number = number + 1;
	}

	return (number);
}
