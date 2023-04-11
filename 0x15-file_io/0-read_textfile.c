#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile- Read text file print to POSIX.
 * @filename: NULL return 0
 * @letters: letters to readable
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ri;
	ssize_t bf;
	ssize_t w;
	ssize_t r;

	bf = open(filename, O_RDONLY);
	if (bf == -1)
		return (0);
ri = malloc(sizeof(char) * letters);
r = read(bf, ri, letters);
w = write(STDOUT_FILENO, ri, r);

free(ri);
close(bf);
return (w);
}