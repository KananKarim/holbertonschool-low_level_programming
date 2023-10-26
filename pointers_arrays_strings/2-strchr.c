#include "main.h"
#define NULL ((void *)0)


/**
 *_strchr - func
 * @s:string
 * @c:which letter
 * Return:firsr occurence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == '\0')
	{
		return (s);
	}

	return (NULL);
}
