#include "main.h"
#include "stdlib.h"
#include <stdio.h>
#include "unistd.h"

/**
 * _strdup -function returns a pointer to a new string
 * which is a duplicate of the string str.
 *
 * _strdup() - returns a pointer to a new string
 * @str: char
 * Returns: A pointer to the duplicated string,
 * NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *aaa;

	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')

		i++;
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)

		return (NULL);

	for (r = 0; str[r]; r++)

		aaa[r] = str[r];

	return (aaa);
}
