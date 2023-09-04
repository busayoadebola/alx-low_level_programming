#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: w- the actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t byte_written;
	ssize_t exact_byte;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	exact_byte = read(fd, buf, letters);
	byte_written = write(STDOUT_FILENO, buf, exact_byte);

	free(buf);
	close(fd);
	return (byte_written);
}

