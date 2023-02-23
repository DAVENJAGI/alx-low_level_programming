#include "main.h"
#include "unistd.h"
#include <stdio.h>

/**
 *  more_numbers -Prints then times the number
 *  Description: prints line after iteration
 *  Return: Always 0
 */

void more_numbers(void)
{
	int x;

	int i;

	while (i <= 10)

	{
	for (x = 0; x <= 14; x++)
	{
		if (x <= 10)
		{
			putchar(x + '0');
		}
	else if (x > 9)
	{
		putchar(x / 10 + '0');
	}
	{
		putchar(x % 10 +'0');
	}
		putchar('\n');
		i++;
	}
	}
}
