#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b:allocated value to memory
 * Return:value
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);

}
