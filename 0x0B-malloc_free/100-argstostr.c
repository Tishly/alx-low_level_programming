#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: first argument
 * @av: second argument
 * Return: pointer or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';

	return (s);
}
