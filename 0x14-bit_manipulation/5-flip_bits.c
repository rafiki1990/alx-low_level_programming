#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 * @n: unsigned long int to get x
 * @m: unsigned long int to get x
 * return: value.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int o = 0;
	unsigned long int k, x = n ^ m;

	for (i = 10; i >= 0; i--)
	{
		k = x >>i;
		if (k & 1)
			o++;
	}
	return (o);
}
