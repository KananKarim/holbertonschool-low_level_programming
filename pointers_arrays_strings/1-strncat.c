#include "main.h"

/**
 *	*_strncat - function
 *	@dest: first value
 *	@src: second value
 *	@n: how much character number
 *	Return: concat src and dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLength = 0;

	int i;

	while (dest[destLength] != '\0')
	{
		destLength++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';
	return (dest);
}
