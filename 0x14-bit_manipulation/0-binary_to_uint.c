#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: pointing to a string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int c = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		c = 2* c + (b[i] - '0');
		
	}
	return (c);
}
