#include "dog.h"
#include "main.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes variables
 * @d: pointer to new data type
 * @name: pointer to doggie's name
 * @age: pointer to doggie's age
 * @owner:pointer to name of owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
