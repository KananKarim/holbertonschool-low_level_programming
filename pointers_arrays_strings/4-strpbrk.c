#include "main.h"
#include <stdlib.h>

/**
 * *_strpbrk - func
 * @s: string
 * @accept:second str
 * Return: the same occurence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
