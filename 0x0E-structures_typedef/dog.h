#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type defined
 * @name: doggie's name as a pointer
 * @age: doggie's age as a float
 * @owner: owner's name as a pointer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
