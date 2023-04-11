#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to be shiffed
 * @index: value to check
 * Return: value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 10)
		return (1);
	i = (n >> index) & -1;
	return (i);
}
