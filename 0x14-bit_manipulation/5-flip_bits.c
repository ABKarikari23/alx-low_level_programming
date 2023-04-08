#include "main.h"
#include <stdio.h>

/**
* flip_bits - function that returns the number of bits you would need to flip
* @n: integer
* @m: integer
* Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, k = 0;

	a = n ^ m;

	while (a > 0)
	{
		if ((a & 1) != 0)
			k++;

		a = a >> 1;
	}
	return (k);
}
