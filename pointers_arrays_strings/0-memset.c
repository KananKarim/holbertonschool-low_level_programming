#include "main.h"

/**
 **_memset - func
 *@s:string
 *@b:what to write
 *@n:how many times
 *Return:modified array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
