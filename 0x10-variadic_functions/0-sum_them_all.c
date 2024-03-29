#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -function that returns the sum of all its parameters
 * @n: integers
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list list;

	va_start(list, n);

	for (i = 0, sum = 0; i < n; i++)

		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
