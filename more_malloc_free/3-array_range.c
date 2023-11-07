#include <stdlib.h>

/**
 * array_range - function
 * @min: min value
 * @max: max value
 * Return: array values between min max
 */

int *array_range(int min, int max)
{
	unsigned int i;

	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
