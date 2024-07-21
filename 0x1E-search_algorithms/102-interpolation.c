#include "search_algos.h"

/**
 * interpolation_search - This function implements the interpolation search
 * algorithm to search for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: Number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located. If value is not present
 * or aray is NULL, return -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int low, high;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
