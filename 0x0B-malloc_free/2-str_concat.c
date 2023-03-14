#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two string
 * @s1:first string
 * @s2:second string
 * Return:concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int q;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL)
	{
		return (strdup(s2));
	}
	else if (s2 == NULL)
	{
		return (strdup(s1));
	}
	q = strlen(s1) + strlen(s2);
	conc_str = (char *)malloc((q + 1) * sizeof(char));

	if (conc_str == NULL)
	{
		return (NULL);
	}
	strcpy(conc_str, s1);
	strcat(conc_str, s2);
	return (conc_str);
}
