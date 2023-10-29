#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function
 * @haystack : first str
 * @needle: second str
 * Return: first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack)
	{
		a = haystack;
		b = needle;

		while (*haystack && *b && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (!*b)
		{
			return (a);
		}
		haystack = a + 1;
	}

	return (NULL);
}
