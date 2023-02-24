#include <stdio.h>

/**
 * main - program to print alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
