#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints binary representation of a number
 * @n: Print number in binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int a = 2, k = 0;

	while (a <= n && k < 62)
	{
		a = a << 1;
		k++;
	}
	if (k != 62)
		a = a >> 1;

	while (a != 0)
	{
		if ((a & n) != 0)
		{
			k++;
			_putchar('0');
		}
		a = a >> 1;
	}
}
