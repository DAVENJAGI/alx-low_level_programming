#include "main.h"
#include <stdio.h>
#include "unistd.h"

/**
 * print_square -prints a square, followed by a new line
 * @size: Size of the square
 * Return: 0 Always
 */

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
	putchar(35);
	}
	putchar('\n');
}
