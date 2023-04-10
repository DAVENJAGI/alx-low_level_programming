#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile -function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @letters: the number of letters it should read and print.
 * @filename: name of the text file to read from.
 *
 * Return: the number of characters  printed.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t U = 0, N = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	U = open(filename, O_RDONLY);
	if (U < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	N = read(U, buffer, letters);
	N = write(STDOUT_FILENO, buffer, N);

	if (N < 0)
		return (0);


	close(U);
	free(buffer);
	return (N);
}
