#include "stdlib.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @f: pointer to function
 *
 * @name: string to add
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

		return;
	f(name);
}
