#include "main.h"
/**
 * _puts_recrsion - function like puts();
 * @s: input
 * Return: Aways 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
