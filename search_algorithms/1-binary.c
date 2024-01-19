#include "search_algos.h"

/**
 * print_array - printing array
 * @array: array to print
 * @low: first value
 * @high: end value
 * Return: void
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);

		if (i < high)
			printf(", ");
	}

	printf("\n");
}

/**
 * binary_search - searching in array with binary
 * @array: array to search key
 * @size: size of array
 * @value: key value
 * Return: key value index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, middle, high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		middle = low + (high - low) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			low = middle + 1;

		else
			high = middle - 1;
	}

	return (-1);
}
