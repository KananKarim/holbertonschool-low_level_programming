#include "main.h"

/**
 * _strlen - get the str
 * @s:pointer to the str address
 * Return: length of the str
 *
 */

int _strlen(char *s)
{
int len;
len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
