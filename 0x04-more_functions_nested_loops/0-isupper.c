#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
	if (c == uppercase)
	{
		isupper = i;
		break;
	}
}
return (isupper);
}
