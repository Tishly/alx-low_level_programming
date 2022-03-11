#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry block
 * Description: print single digit numbers
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
