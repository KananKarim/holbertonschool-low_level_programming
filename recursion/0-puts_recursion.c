#include "main.h"

/**
 *  _puts_recursion - function
 * @s: string
 * Return
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
