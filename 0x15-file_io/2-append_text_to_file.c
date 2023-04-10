#include "main.h"
#include "unistd.h"

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: Content to be put in the file
 *
 * Return: 1 if succwss, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int U = 0, N = 0, i = 0;

	if (!filename)
		return (-1);

	U = open(filename, O_WRONLY | O_APPEND);
	if (U < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		N = write(U, text_content, i);
		if (N < 0)
			return (-1);
	}
	close(U);
	return (1);
}
