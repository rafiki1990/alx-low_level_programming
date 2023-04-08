#include "main.h"
#include <stdio.h>
#include <stdlib.h>


int create_file(const char *filename, char *text_content)
{
	int br, w, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	br = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(br, text_content, i);

	if (br == -1 || w == -1)
		return (-1);
	close(br);
	return (1);
}
