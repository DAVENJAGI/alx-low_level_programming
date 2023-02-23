#include "main.h"
#include <stdio.h>
#include "unistd.h"

/**
 * print_most_numbers -print numbers from 0 to 9, do not print 2 and 4
 * Return: numbers 0 to 9, without 2 and 4
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 &&x != 4)
		{
		putchar(x + '0');
		}
	}
	putchar('\n');
}
