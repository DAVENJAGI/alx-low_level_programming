#include "main.h"
/**
 * _memcpy -Copies bytes from memory area to another
 * @n: Bytes to be copies
 * @src: Memory area of bytes to be copied from
 * @dest: Destination in which bytes of data are copied to
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
