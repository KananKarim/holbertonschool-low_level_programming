#include "main.h"


/**
 * *_memcpy - func
 * @dest:dest arr
 * @src:src arr
 * @n: how many times
 * Return: copied arr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
