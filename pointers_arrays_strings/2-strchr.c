#include "main.h"
#include <stdlib.h>


/**
 *_strchr - func
 * @s:string
 * @c:which letter
 * Return:firsr occurence
 */

char *_strchr(char *s, char c)
{
	while (*s)
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
