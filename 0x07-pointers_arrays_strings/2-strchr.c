#include "main.h"

/**
 * _strchr -Finds first occurrence of a character
 * @c: input
 * @s: input
 * Return: 0 always success
 */
char *_strchr(char *s, char c)
{
		int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
