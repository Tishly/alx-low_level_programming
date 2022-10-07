#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for a value in an
 * array of integers using linear search algorithm
 *
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: element to search for in array
 *
 * Return: -1 if array null or value absent, else return value
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);
}
