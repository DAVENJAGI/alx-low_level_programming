#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked -a function that allocates memory
 * @b: allocated memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
