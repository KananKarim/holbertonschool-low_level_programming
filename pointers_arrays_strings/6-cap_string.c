#include "main.h"

/**
 * is_seperator - function
 * @c : char
 * @seperators: seperators
 * Return: true
 */

int is_seperator(char c, char *seperators)
{
	int i;

	for (i = 0; seperators[i] != '\0'; i++)
	{
		if (c == seperators[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * *cap_string - function
 * @s: string
 * Return: capitalized strings
 */

char *cap_string(char *s)
{
	int i;

	char seperators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (i == 0 || is_seperator(s[i - 1], seperators))
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 'a' - 'A';
				}
			}
		}
	}
	return (s);
}
