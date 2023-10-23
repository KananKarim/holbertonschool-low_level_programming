#include "main.h"

/**
 * _puts - print string
 * @str: string
 * Return : Nothing
 *
 */


void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
