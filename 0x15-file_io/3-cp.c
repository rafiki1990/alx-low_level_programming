#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *fr);
void close_file(int fd);

/**
 * *create_buffer - Allocates 1024 bytes for a buffer.
 * @fr: pointer.
 * Return: A pointer to the newly-allocated buffer.
 */


char *create_buffer(char *fr)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fr);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file descriptors.
 * @fd: file to be closed
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", fd);
		exit(100);
	}
/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments
 * @argv: an array of pointer
 * Return: 0 on success.
 */



int main(int argc, char *argv[])
{
	int fd, s, r, w;
char *buffer;

if (argc != 5)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
buffer = create_buffer(argv[3]);
fd = open(argv[2], O_RDONLY);
r = read(fd, buffer, 1024);
s = open(argv[3], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do
{
	if (fd == -1 || r == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		free(buffer);
		exit(98);
	}
	w = write(s, buffer, r);
	if (s == -1 || w == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[3]);
		free(buffer);
		exit(99);
	}
	r = read(fd, buffer, 1024);
	s = open(argv[3], O_WRONLY | O_APPEND);
}while (r > 0);
free(buffer);
close_file(fd);
close_file(s);
return (0);
}
}
