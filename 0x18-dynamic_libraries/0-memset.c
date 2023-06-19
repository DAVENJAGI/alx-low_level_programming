#include "main.h"
/**
 * _memset -functions that fills memory with aspecific value
 * @s: Startting address of memory to be filled
 * @b: Costant byte to fill te address memory
 * @n: number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
