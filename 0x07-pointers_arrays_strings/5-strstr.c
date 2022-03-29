#include "main.h"
#include <stdio.h>

/**
 * strstr - finds first occurrence of the
 * substring 'needle' in the string 'haystack'.
 *
 * @haystack: string to be checked
 * @needle: substring to find
 *
 * Return: pointer
 */

char *strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != nedle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
