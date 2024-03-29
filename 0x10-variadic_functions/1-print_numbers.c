#include <stdio.h>
#include<stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @n: number of integers passed to the function
 * @separator: The string to be printed between numbers
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

				if (i != n - 1 && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
}
