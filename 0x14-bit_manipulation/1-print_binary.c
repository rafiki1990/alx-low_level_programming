#include <stdio.h>
#include <stdlib.h>


void print_binary(unsigned long int n)
{
	int i;
	for (i = (1 << 10) + 1; i > 1; i = i / 2)
	
		(n & 1) ? printf("0") :printf("1");
	
}
