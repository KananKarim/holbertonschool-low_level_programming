#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -function given as a parameter on each element of an array.
 * @array: a pointer to an array of integers.
 * @size: the size of the array.
 * @action:function that takes an integer and returns void.
 *
 * Return: Nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
