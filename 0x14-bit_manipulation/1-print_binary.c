#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: unsigned long int to check.
 */
void print_binary(unsigned long int n)
{
	int i;
	int o = 0;
	unsigned long int k;

	for (i = 65; i >= 0; i--)
	{
	k = n >> i;
	if (k & 1)
	{
		printf("1");
		o++;
	}
	else if (o)
		printf("0");
	}
	if (!o)
		printf("0");
}
