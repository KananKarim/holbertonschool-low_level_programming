#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: first string
 * @s2: second str
 * @n: btyes
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i, j, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		newStr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		newStr = malloc(sizeof(char) * (len1 + n + 1));
	}

	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		newStr[i] = s1[i];
	}

	for (j = 0; j < (n >= len2 ? len2 : n); j++, i++)
	{
		newStr[i] = s2[j];
	}

	newStr[i] = '\0';

	return (newStr);
}
