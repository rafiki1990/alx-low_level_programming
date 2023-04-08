#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * ssize_t - function that reads a text file and prints it to the POSIX standard output.
 * @filename: file name 
 * @letters: letters
 * return: value
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
