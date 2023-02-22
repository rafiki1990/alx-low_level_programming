#include "main.h"

/**
 * print_alphabet - print all alphabet 10 times in lowercase
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char letter;

	char b;

	b = 0;

	while (b < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		b++;
		_putchar('\n');
	}
}

