#include "main.h"
#include <stdio.h>
#include "unistd.h"

/**
 * print_number - function that prints an intege
 * @n: integer to be printed
 * print_number -print an integer
 * Return:void
 */

void print_number(int n)
{

	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_numbers(num / 10);

	putchar((num % 10) + '0');
}
