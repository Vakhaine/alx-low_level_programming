#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints to POSIX STDOUT.
 *
 * @filename: text file
 * @letters: number of letters to be read
 *
 * Return: actual number of bytes read and printed
 * 0 if file can not be opened or read
 * 0 if filename is NULL
 * 0 if if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t r;
	ssize_t w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fp);

	return (w);
}
