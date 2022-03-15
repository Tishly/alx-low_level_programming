#include "main.h"
/**
 * main -  Main block
 * Description: Print _putchar.c
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[10] = "_putchar"

		int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
