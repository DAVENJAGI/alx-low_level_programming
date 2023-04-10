#include "main.h"

/**
 * create_file -Function that creates a file.
 * @filename: is the name of the file to create
 * @text_content - Content to be placed in file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int U = 0, N = 0, i = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	U = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	N = write(U, text_content, i);

	if (U == -1 || N == -1)
		return (-1);

	close(U);
	return (1);
}
