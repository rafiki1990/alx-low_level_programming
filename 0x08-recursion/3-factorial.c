#include "main.h"
/**
 * factorial - return the factorial of the number
 * @n: number to return the factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
			if (n == 0)
				return (0);
			if (n > 0)
				return (1);
			return (n * factorial(n - 1));
}
