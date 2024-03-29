#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return:the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int U = 0;
	int strn = 0;

	if (!b)
		return (0);
	for (strn = 0; b[strn]; strn++)
	{
		if (b[strn] < '0' || b[strn] > '1')
			return (0);
		U = 2 * U + (b[strn] - '0');
	}
	return (U);
}
