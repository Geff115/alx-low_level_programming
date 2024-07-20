#include "search_algos.h"

/**
 * jump_search - This function searches for a value in a sorted array
 * of integers using the jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1, if value is not present in array or array is NULL. Otherwise
 * return the index where the value is.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, low, jump;

	if (array == NULL)
		return (-1);

	low = 0;
	jump = sqrt(size); /* Using the sqrt function in the math.h header */
	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, i);
			return (i);
		}

		if (array[i] < value)
			low = i;
		else
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, i);
	for (i = i; low < i; low++)
	{
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
