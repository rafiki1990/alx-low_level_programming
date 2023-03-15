#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * wordss - counts no of words
 * @s:pionter to string
 * Return: no of string
 */
int wordss(char *s)
{
	int flag = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - function that splits string into words
 * @str:string to be splitted
 * Return:splitted word
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, k = 0, len = 0, words, c = 0,  start, end;

	while (*(str + len))
		len++;
	words = wordss(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
