#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - find the length of a string of characters
 * @s: pointer to the string
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i;
	char *z;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	z = malloc((size1 + size2) * sizeof(char) + 1);

	if (z == 0)
	{
		return (0);
	}

	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
		{
			z[i] = s1[i];
		}
		else
		{
			z[i] = s2[i - size1];
		}
	}
	z[i] = '\0';
	return (z);
	free(z);
}
