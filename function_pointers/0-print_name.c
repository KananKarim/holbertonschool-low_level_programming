#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: a pointer to a string (the name to be printed).
 * @f: a function pointer to a function that takes a char pointer
 *
 * Return: Nothing.
 */



void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
