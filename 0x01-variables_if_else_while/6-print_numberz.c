#include <stdio.h>

/**
 * main - program that prints single digits using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
