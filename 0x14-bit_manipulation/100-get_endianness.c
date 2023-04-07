#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: value.
 */

int get_endianness(void)
{
	int i;
	char *k;

	k = (char *) &i;
	return (*k);
}
