#include "main.h"

/**
 * _sqrt_recursion - print square root of natural number
 * @n:number
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int g = (n % 2 == 0) ? (n / 2) : ((n - 1) / 2);

		return (_sqrt_help(n, g));
	}
}

/**
 * _sqrt_help - prints square root
 * @n:number
 * @g:guessed number
 * Return:Square root
 */
int _sqrt_help(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g * g > n)
	{
		return (_sqrt_help(n, g - 1));
	}
	else if (g * g < n && (g + 1) * (g + 1) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_help(n, g + 1));
	}
}
