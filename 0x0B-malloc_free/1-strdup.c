#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @*str: string given as a parameter
 * @*ptr: pointer to return
 * Return: NULL
 */

char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *ptr = &str;

	char *str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return ('\0');
	}
	if (str <= i)
	{
		return ('\0');
	}
	while (i < str)
	{
		str[i];
		i++;
	}
	return (ptr);
	free(ptr);
}
