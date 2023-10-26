#include "main.h"

/**
 * _strcmp - function
 * @s1: first word
 * @s2: second word
 * Return:comparsion
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
