#include "search_algos.h"

/**
 * binary_search - This function implements the binary search algorithm
 * and searches for a value in a sorted array of integers.
 * @array: A pointer to the first element in the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1 if array is NULL or value can't be found. Otherwise
 * return the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid_index, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid_index = (start + end) / 2;
		if (array[mid_index] == value)
			return (mid_index);

		else if (array[mid_index] < value)
			start = mid_index + 1;
		else if (array[mid_index] > value)
			end = mid_index - 1;
	}
	return (-1);
}
