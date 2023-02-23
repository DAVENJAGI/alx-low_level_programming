#include "main.h"
#include <stdio.h>
#include "unistd.h"

/**
 * print_diagonal -Draws diagonal lines on the terminal
 * @n: the number of times the character \ should be printed
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(92);
	}
	putchar('\n');
}
