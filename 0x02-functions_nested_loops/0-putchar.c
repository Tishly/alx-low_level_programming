#include "main.h"
/**
 * main -  Main block
 * Description: Print _putchar.c
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *s = "_putchar"

	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
