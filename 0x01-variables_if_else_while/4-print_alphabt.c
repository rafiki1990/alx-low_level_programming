#include <stdio.h>

/**
 * main - program to printlowercase alpphabet letters except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		if (alp != 'q' && alp != 'e')
			putchar(alp);
	putchar('\n');
	return (0);
}
