#include "main.h"
#include <stdlib.h>

/**
 * create_array - create size of array and assign of array
 * @size: size of array
 * @c: char to assign
 * description: create array of size and assign of array
 * Return: 0 (success), NULL (wrong)
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

