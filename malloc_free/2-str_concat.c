#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: If s1 = NULL, s2 = NULL
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat, *temp1 = s1, *temp2 = s2;

	while (*temp1 != '\0')
	{
		temp1++;
		len1++;
	}

	while (*temp2 != '\0')
	{
		temp2++;
		len2++;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';
	return (concat);
}
