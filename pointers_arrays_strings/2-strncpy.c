#include "main.h"

/**
 * *_strncpy - function
 * @dest: string1
 * @src: string2
 * @n: integer
 * Return:copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
