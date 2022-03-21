#include "main.h"

/**
 * rev_string - prints reversed string
 * @s: pointer to the string to be printed in reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	i = 0;

		half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}

}
