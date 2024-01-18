#include "search_algos.h"

/**
 * linear_search - function for linear search
 * @size: size of arr
 * @value: key value
 * @array: array of integers
 * Return: value index on success,
 * Otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
