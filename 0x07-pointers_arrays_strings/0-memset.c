#include "main.h"

/**
 * *_memset - function that fills the first n bytes
 * memory area pointed to by s with a constant byte b
 * @s: the pointer to use
 * @n: number of bytes to fill
 * @b: the constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
