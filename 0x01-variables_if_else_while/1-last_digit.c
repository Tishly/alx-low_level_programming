#include <stdio.h>
#include <time.h>
#include <stlib.h>
/**
 * main - Entry code
 * Description: prints "last digit"
 * Return: 0
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last <  6)
		printf("Last digit of %d is %d and is less than 6 andnot 0\n", n, last);
	return (0);
}
