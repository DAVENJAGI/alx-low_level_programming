#include "main.h"
#include <stdio.h>
#include "unistd.h"

/**
 * reset_to_98 -takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: Input
 * Return: n
 */

void reset_to_98(int *n)
{
	*n = 98;
}
