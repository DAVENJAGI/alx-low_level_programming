#include "main.h"
#include <stdio.h>
#include "unistd.h"

/**
 * print_line -Draw straight lines in the terminal
 * @n: number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
