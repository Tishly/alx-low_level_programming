#include <stdio.h>
#include "main.h"

/**
 * *create_array - function that creates an array of chars, 
 * and initializes it with a specific char
 * @*s: pointer to return on failure
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	int *s[] = malloc(size * sizeof(char c));

	if (size == 0)
		return (NULL);
	else
	{
		printf("%d\n", *s);
	}	return (0);
}