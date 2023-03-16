#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

/**
 * print_error - checks if the program has error
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_valid_number - checks if number is valid
 * @str:string to check
 * Return:number
 */
int is_valid_number(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * parse_number - number
 * @str:string
 * Return:parsed number
 */
int parse_number(char *str)
{
	int num = 0;

	while (*str != '\0')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

/**
 * main - returns a function
 * @argc: number of arguments
 * @argv:array of arguments
 * Return: multiplication of two numbers
 */
int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		print_error();
	}
	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		print_error();
	}
	num1 = parse_number(argv[1]);
	num2 = parse_number(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);
	return (0);
}
