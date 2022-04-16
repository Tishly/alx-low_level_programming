#include "funtion_pointers.h"

/**
 * array_iterator - function that iterats arrays
 * @array: array
 * @size: the size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
