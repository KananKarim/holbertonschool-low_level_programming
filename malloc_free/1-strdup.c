#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: The string to be copied.
 * Return: If str = NULL
 */


char *_strdup(char *str)
{
	char *duplicate, *temp;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	temp = str;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}

	duplicate[len] = '\0';

	return (duplicate);
}
