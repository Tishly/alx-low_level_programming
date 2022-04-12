#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - a function that prints
 * @d: pointer to struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (name == NULL)
		printf("Name: (nil)");
	if (age == NULL)
		printf("Age: (nil)");
	if (owner == NULL)
		printf("Owner: (nil)");
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);

	return (0);
}
