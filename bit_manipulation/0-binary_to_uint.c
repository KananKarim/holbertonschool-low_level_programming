#include "main.h"

/**
 * binary_to_uint - binary number to unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	size_t number = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		number <<= 1;

		if (*b == '1')
			number |= 1;

		b++;
	}

	return (number);
}
