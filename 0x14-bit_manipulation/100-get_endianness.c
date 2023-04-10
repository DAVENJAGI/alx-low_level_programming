#include  "main.h"
#include <stdio.h>

/**
 * get_endianness -function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int U;

	U = 1;

	if (*(char *)&U == 1)
		return (1);

	else 
		return (0);
}
