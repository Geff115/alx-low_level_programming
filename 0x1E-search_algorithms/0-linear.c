#include "search_algos.h"

/**
 * linear_search - This function implements a linear search algorithm
 * to search for a value in an array of integers.
 * @array: A pointer to the first element in the array.
 * @size: The size of the array.
 * @value: The value of the element to search for.
 *
 * Return: if value isn't found, or array is NULL, return -1. Otherwise
 * return the index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
