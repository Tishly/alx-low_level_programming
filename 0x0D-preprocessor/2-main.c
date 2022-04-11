#include <stdlib.h>
#include <stdio.h>

#ifndef FILE_NAME
#define FILE_NAME

#endif
/**
 * main - prints name of file
 * @argc: argument count
 * @argv: argument variables
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
