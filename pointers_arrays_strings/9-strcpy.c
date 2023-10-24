#include "main.h"

/**
 **_strcpy - function
 *@dest:dest
 *@src:src str
 *Return:originalDest
 */

char *_strcpy(char *dest, char *src)
{
char *originalDest;
originalDest = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (originalDest);
}
