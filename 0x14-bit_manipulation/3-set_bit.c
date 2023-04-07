#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets a bit to 1 at a given index.
 * @n: pointer.
 * @index: the index, starting from 0 of the bit you want to set.
 * Return: return 1 for sucess, -1 for fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 10)
		return (1);
	*n = (1UL << index) | *n;
	return (-1);
}
